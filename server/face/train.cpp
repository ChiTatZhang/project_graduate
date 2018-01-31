#include <iostream>
// #include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/face.hpp>
#include <opencv2/face/facerec.hpp>
#include <opencv2/opencv.hpp>
#include <vector>
#include <fstream>
#include "facedetect.h"
using namespace std;
using namespace cv;
using namespace face;


int save_faceImage(Mat &image,const char *Dir,const char *name,const char *csvPath)
{
	//	Mat image=imread("timg.jpeg");
	vector<Mat> faceImg;
	vector<Mat>::iterator face;
	ofstream file;
	file.open(csvPath,ios::out|ios::app);
	static int num =0;
//	for(face=images.begin();face!=images.end();face++){
		detect_face(image,NULL,&faceImg);
		cout<<"face:"<<faceImg.size()<<endl;
		char makeDir[64]={0};
		snprintf(makeDir,sizeof(makeDir),"mkdir %s/%s",Dir,name);
		system(makeDir);
		imshow("img",image);
		//for(face=faceImg.begin();face!=faceImg.end();face++)
		if(faceImg.size()==1)
		{
			char path[64]={0};
			snprintf(path,sizeof(path),"%s/%s/%d.jpg",Dir,name,num);
			num++;
			cout<<"write_num: "<<num<<endl;
			//		Mat tmpFace;
			//		resize(*face,tmpFace,Size(100,100));
			imshow(Dir,faceImg[0]);
			waitKey(500);
			cout<<num<<endl;	
			imwrite(path,faceImg[0]);
			if(file.is_open())
			{
				file<<path<<";"<<name<<"\n";
				file.close();
				return 0;
			}
			else
			{
				cout<<path<<" 写入"<<csvPath<<"失败"<<endl;
				return -1;
			}
		}
//	}
	file.close();
	cout<<"over"<<endl;
	//	waitKey(0);
	return -1;
	//namedWindow("photo");
	/*	imshow("photo",image);
		while(waitKey(1)!='n');
		Mat ROI =image(Rect(1,1,image.cols/2,image.rows/2));
		imshow("ROI",ROI);
		while(waitKey(0)!='n');
		return 0;
		*/
}
int read_csv(const string &filename,vector<Mat>&images,vector<int>&lables,char separator=';')
{
	ifstream file;
	stringstream stream;
	string line,imgPath,lable;
	file.open(filename.c_str(),ios::in);
	if(file.is_open())
	{
		while(getline(file,line))
		{
			//		cout<<line<<endl;
			stream<<line;
			getline(stream,imgPath,separator);
			getline(stream,lable);
					cout<<imgPath<<"           "<<lable<<endl;
			stream.clear();
			images.push_back(imread(imgPath,0));
			lables.push_back(atoi(lable.c_str()));

		}
	}
	else
	{
		cout<<"data.txt打开失败"<<endl;
	}
	return 0;
}
int add_face(VideoCapture &capture,const string &name)
{
//	VideoCapture capture(0);
	int key=0;
	static int num=0;
	static int sum=0;
	while(key=waitKey(100))
	{
		Mat frame;
		capture>>frame;
		vector<Mat> MatImg;
		detect_face(frame,NULL,&MatImg);
		imshow("face",frame);
		if(MatImg.size()==1)
		{
			num++;	
			if(num>=10)
			{
				int ret=save_faceImage(frame,"./att_faces/",name.c_str(),"at.txt");
				if(ret==0)
				{
					imshow("getFace",MatImg[0]);
					num=0;
					sum++;
				}
			}
		}
		if(sum>=10)
		{
			break;
		}

		
	}
	return 0;
}
int main()
{
	vector<Mat>imgs;
	vector<int>lab;
	//	Mat image = imread("timg.jpeg");
	//	save_faceImage(image,"./photo/","face1","data.txt");
	/*	for(im=imgs.begin();im!= imgs.end();im++)
		{
		imshow("face",*im);
		waitKey(100);
		}
		*/		
	VideoCapture capture(0);
	int key;
	//vector<Mat>frames;
#if 0
	while(key=waitKey(100))
	{
		Mat frame;
		Mat myFace;
		//string str="photo";
		static int num=0;
		capture>>frame;
	/*	if(key=='p')
		{
			//string path=str+to_string(num)+".jpg";
			//	string path=format("photo%d.jpg",num);
			//	cout<<path<<endl;
			resize(frame,myFace,Size(92,112));
			//	imwrite(path,frame);
			frames.push_back(myFace);
			num++;
			cout<<"已保存"<<num<<"张图片"<<endl;
		}*/
		vector<Rect> rec;
		detect_face(frame,&rec);
		imshow("video",frame);
		if(rec.size()==1)
		{
			save_faceImage(frame,"./att_faces","41","at.txt");
			num++;
		}
		if(num>9){
			break;
		}

	}
#endif
	int time=0;
	read_csv("at.txt",imgs,lab);
	cout<<imgs.size()<<lab.size()<<endl;
//	vector<Mat>::iterator im;
	int MaxLab=lab[lab.size()-1];
	cout<<"maxlab: "<<MaxLab<<endl;
//	save_faceImage(frames,"att_faces","42","at.txt");
	cout<<"training...."<<endl;
	Ptr<FaceRecognizer> model =LBPHFaceRecognizer::create();
	model->train(imgs,lab);
	model->write("test.xml");
	while(key=waitKey(100)){
		Mat tmpframe;
		capture>>tmpframe;
		Mat testImg;
		vector<Rect> rec;
		detect_face(tmpframe,&rec);
		Point text;
		cout<<"detect_face rec.size()"<<rec.size()<<endl;
		if(rec.size()>0){
		
			cvtColor(tmpframe,testImg,CV_BGR2GRAY);
			vector<Rect>::iterator pRec;
			for(pRec=rec.begin();pRec!=rec.end();pRec++){
				text=Point((*pRec).x,(*pRec).y);
				Mat faceImg=testImg(*pRec);
				Mat resizeImg;
				resize(faceImg,resizeImg,Size(92,112));
				imshow("tmpImg",resizeImg);
				int label;
				double number;
				model->predict(resizeImg, label, number);
			//	cout<<"predictLab="<<predictLab<<endl;
				cout<<"label:" << label << endl;
				cout<<"num:" << number << endl;
				int predictLab = label;
				if((predictLab == 41 || predictLab==44) && number<90){
					time=0;
					string name = "wujiabin";
					putText(tmpframe, name, text, FONT_HERSHEY_COMPLEX, 1, Scalar(0, 0, 255));    
				}else if(predictLab==42 && number<90){
					time=0;
					string name = "zhangzhida";
					putText(tmpframe, name, text, FONT_HERSHEY_COMPLEX, 1, Scalar(0, 255, 0));    	
				}else if(predictLab==45 && number<90){
					time=0;
					string name = "liuchangxin";
					putText(tmpframe, name, text, FONT_HERSHEY_COMPLEX, 1, Scalar(0, 255, 0));    	
				}else
				{
					time++;
					if(time>=50)
					{
						string name ="other";
						putText(tmpframe, name, text, FONT_HERSHEY_COMPLEX, 1, Scalar(255 ,0 , 0));    	
				
					}
				}	
			}
		}
		imshow("video",tmpframe);
		if(key=='p')
		{
			MaxLab++;
			add_face(capture,to_string(MaxLab));
		}
		if(key=='t')
		{
			read_csv("at.txt",imgs,lab);
			cout<<imgs.size()<<lab.size()<<endl;
			MaxLab=lab[lab.size()-1];
			cout<<"maxlab: "<<MaxLab<<endl;
			cout<<"training...."<<endl;
			model->train(imgs,lab);
			model->write("test.xml");
		}
		if(key=='n')
		{
			break;
		}
	}

	//Mat testImg=imread("photo0.jpg",0);
	//Mat testImg=imgs[imgs.size()-1];
	//int testLab=lab[imgs.size()-1];
	//int testLab=0;

}

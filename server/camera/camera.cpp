#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture capture(0);
	int key;
	while(key=waitKey(100))
	{
       		Mat frame;
//		string str="photo";
		static int num=0;
		capture>>frame;
		imshow("video",frame);
		if(key=='p')
		{
			//string path=str+to_string(num)+".jpg";
			string path=format("photo%d.jpg",num);
			cout<<path<<endl;
			Mat myFace;
		//	resize(frame,myFace,Size(92,112));
			imwrite(path,frame);
			num++;
		}
		else if(key=='n')
		{
			break;
		}
	}
}

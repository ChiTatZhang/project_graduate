#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <iostream>

using namespace std;

struct student{
	int stdno;
	char name[16];
	int age;
	double score;	
};
struct  staffinfo
{
	int id;
	char name[16];
	char telephone[16];
	char emile[32];
	char starttime[16];
	char jobtitle[16];
	char dept[16];
	char passwd[32];
	int authority;
};
struct attendence{
	int id;
	char date[16];
	char name[16];
	char comeTime[16];
	char leaveTime[16];
	int bookIn;
	int evection;
	int vacate;
	char account[128];
};
struct iochalk{
	int id;
	char name[16];
	char date[16];
	int iostatus;
};
struct overtime{
	int id;
	char name[16];
	char date[16];
	char action[16];
	char end[16];
	int interval;
};
struct vacate
{
	int id;
	char name[16];
	char action[16];
	char end[16];
	int intervar;
	char cause[128];
};
struct evection{
	int id;
	char name[16];
	char action[16];
	char end[16];
	int interval;
	char loction[32];
	char cause[128];
}  ;
struct stats{
	int id;
	char name[16];
	char date[16];
	int late;
	int leave;
	int truant;
	int vacate;
	int evection;
};
struct settime{
	char ss[16];
	char sx[16];
	char xs[16];
	char xx[16];
};
struct caller{
	char name[16];
	char who[16];
	char time[16];
	char cause[128];
};
int create_table()
{
	sqlite3 *db;
	char *zErrMsg;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	const char *sql;
	sql = "create table student("\
	       "stdno int primary key not null,"\
	       "name text not null,"\
	       "age int not null,"\
	       "score real);";
	rc = sqlite3_exec(db,sql,NULL,0,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		fprintf(stdout,"Table created successfully\r\n");
	}
	sqlite3_close(db);
	return 0;
}


int insert_item(const char *sql)
{
	sqlite3 *db;
	char *zErrMsg;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	sql = "insert into student values(1232,'liu',33,98.9);";
	rc = sqlite3_exec(db,sql,NULL,0,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		fprintf(stdout,"item insert successfully\r\n");
	}
	sqlite3_close(db);
	return 0;
}

int delete_item(const char *sql)
{
	sqlite3 *db;
	char *zErrMsg;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	sql = "delete from student where stdno=123;";
	rc = sqlite3_exec(db,sql,NULL,0,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		fprintf(stdout,"delete item successfully\r\n");
	}
	sqlite3_close(db);
	return 0;
}


int update_item(const char *sql)
{
	sqlite3 *db;
	char *zErrMsg;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	sql = "update student set score=103 where name='zhang';";
	rc = sqlite3_exec(db,sql,NULL,0,&zErrMsg);
	if(rc != 0)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		fprintf(stdout,"update item successfully\r\n");
	}
	sqlite3_close(db);
	return 0;
}

int select_item(struct student **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct student *)malloc(sizeof(struct student)*(*num));
	struct student *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->stdno));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->age));
		sscanf(pResult[tmpCol++],"%lf",&(tmpdata->score));
		cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}
int select_item(struct staffinfo **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct staffinfo *)malloc(sizeof(struct staffinfo)*(*num));
	struct staffinfo *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->id));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->telephone,pResult[tmpCol++]);
		strcpy(tmpdata->emile,pResult[tmpCol++]);
		strcpy(tmpdata->starttime,pResult[tmpCol++]);
		strcpy(tmpdata->jobtitle,pResult[tmpCol++]);
		strcpy(tmpdata->dept,pResult[tmpCol++]);
		strcpy(tmpdata->passwd,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->authority));
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}
int select_item(struct attendence **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct attendence *)malloc(sizeof(struct attendence)*(*num));
	struct attendence *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->id));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->date,pResult[tmpCol++]);
		strcpy(tmpdata->comeTime,pResult[tmpCol++]);
		strcpy(tmpdata->leaveTime,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->bookIn));
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->evection));
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->vacate));
		strcpy(tmpdata->account,pResult[tmpCol++]);
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}

int select_item(struct iochalk **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct iochalk *)malloc(sizeof(struct iochalk)*(*num));
	struct iochalk *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->id));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->date,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->iostatus));
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}

int select_item(struct overtime **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct overtime *)malloc(sizeof(struct overtime)*(*num));
	struct overtime *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->id));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->date,pResult[tmpCol++]);
		strcpy(tmpdata->action,pResult[tmpCol++]);
		strcpy(tmpdata->end,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->interval));
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}

int select_item(struct vacate **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct vacate *)malloc(sizeof(struct vacate)*(*num));
	struct vacate *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->id));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->action,pResult[tmpCol++]);
		strcpy(tmpdata->end,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->intervar));
		strcpy(tmpdata->cause,pResult[tmpCol++]);
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}

int select_item(struct evection **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct evection *)malloc(sizeof(struct evection)*(*num));
	struct evection *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->id));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->action,pResult[tmpCol++]);
		strcpy(tmpdata->end,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->interval));
		strcpy(tmpdata->loction,pResult[tmpCol++]);
		strcpy(tmpdata->cause,pResult[tmpCol++]);
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}

int select_item(struct stats **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct stats *)malloc(sizeof(struct stats)*(*num));
	struct stats *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->id));
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->date,pResult[tmpCol++]);
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->late));
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->leave));
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->truant));
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->vacate));
		sscanf(pResult[tmpCol++],"%d",&(tmpdata->evection));
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}

int select_item(struct settime **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct settime *)malloc(sizeof(struct settime)*(*num));
	struct settime *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		strcpy(tmpdata->ss,pResult[tmpCol++]);
		strcpy(tmpdata->ss,pResult[tmpCol++]);
		strcpy(tmpdata->xs,pResult[tmpCol++]);
		strcpy(tmpdata->xx,pResult[tmpCol++]);
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}

int select_item(struct caller **data,const char *sql,int *num)
{
	sqlite3 *db;
	char *zErrMsg;
	char ** pResult;
	int row,col;
	int rc;
	rc = sqlite3_open("test.db",&db);
	if(rc != 0)
	{
		fprintf(stderr,"Can't open database:%s\r\n",sqlite3_errmsg(db));
		exit(0);
	}else{
		fprintf(stderr,"Opened database successfully\r\n");
	}

	//const char *sql;
	//sql = "select * from student ;";
	rc = sqlite3_get_table(db,sql,&pResult,&row,&col,&zErrMsg);
	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error:%s\n",zErrMsg);
		sqlite3_close(db);
		sqlite3_free(zErrMsg);
		return -1;
	}
	else
	{
		fprintf(stdout,"select item successfully\r\n");
	}
	*num=row;
	*data=(struct caller *)malloc(sizeof(struct caller)*(*num));
	struct caller *tmpdata=*data;
	int tmpCol=col;
	for(int i=0;i<row;i++)
	{
		//*data->stdno=pResult[tmpCol++];
		strcpy(tmpdata->name,pResult[tmpCol++]);
		strcpy(tmpdata->who,pResult[tmpCol++]);
		strcpy(tmpdata->time,pResult[tmpCol++]);
		strcpy(tmpdata->cause,pResult[tmpCol++]);
		//cout<<(*data)->stdno<<(*data)->name<<(*data)->age<<(*data)->score<<endl;
		tmpdata++;
		/*cout<<"第"<<i<<"组数据"<<endl;
		  for(int j=0;j<col;j++)
		  {
		  cout<<pResult[j]<<": "<<pResult[tmpCol]<<endl;
		  tmpCol++;	
		  }*/

	}
	sqlite3_free_table(pResult);
	sqlite3_close(db);
	return 0;
}
int main()
{
	struct staffinfo *stu;
	int num;
	const char *sql="select * from staffinfo;";
	//create_table();
	//insert_item();
	select_item(&stu,sql,&num);
	struct staffinfo *tmp=stu;
	//delete_item();
	cout<<"num="<<num<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<tmp->id<<" ";
		cout<<tmp->name<<" ";
		cout<<tmp->telephone<<" ";
		cout<<tmp->emile<<" ";
		cout<<tmp->starttime<<" ";
		cout<<tmp->jobtitle<<" ";
		cout<<tmp->dept<<" ";
		cout<<tmp->passwd<<" ";
		cout<<tmp->authority<<endl;
		tmp++;
	}
	//updata_item();

}

#include <iostream>
using namespace std;
struct cs{
	int course;
	int score;
	cs *csnext;
	cs(){
		csnext=NULL;
	}
};
struct stu{
	char name[12];
	int stuid;
	cs *cshead=NULL;
	stu *stunext=NULL;
};
int mainmenu(){
	int cmd;
	cout<<"\t\t《学生成绩管理系统》\n";
	cout<<" \t\t[0]新生注册\n";
	cout<<" \t\t[1]选课登记\n";
	cout<<" \t\t[2]学生成绩输入\n";
	cout<<" \t\t[3]成绩查询\n";
	cout<<" \t\t[4]修改成绩\n";
	cout<<" \t\t[5]退出\n";
	cout<<"\t\t命令? ";
	cin>>cmd;
	return cmd;
}
int sr(stu *phead){
	cout<<"注意：新生注册学号不能重复！\n";
	do{
		int count=0;
		char ch;
		cout<<"学号\t\t姓名"<<endl;
		while(1){	
			stu *p=new stu;
			cin>>p->stuid;
			if(p->stuid<0)
				break;
			cin>>p->name;
			p->stunext=phead;
			phead=p;
		}
		cout<<cout<<"学生数据库共有"<<count<<"个记录\n"; 
		cout<<"继续新的注册?";
		cin>>ch;
	}while(ch!='n'&&ch!='N');
	return 0;
}
int main(){
	stu *head=new stu;
	head=NULL;
	while(1){
		int a=mainmenu();
		switch(a){
		case 0:
			sr(head);
			break;
		case 5:
			return 0;
		}
	}
	return 0;
}

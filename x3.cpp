#include <iostream>
#include <string>
using namespace std;
// ���ӻ�ֵ�����ַ���
int swap1(int *p1,int *p2)
{
	int temp;
	temp=*p1; *p1=*p2; *p2=temp;	//ͨ��ָ����ʱ����������������� 
	return 0;						//�˺�������������ֵ���޷���ֵ��return 0�ú���������������ͬ 
} 
int swap2(int &r1,int &r2)
{
	int temp;
	temp=r1; r1=r2; r2=temp;     
	//��Ϊ���ã����Ƽ򻯵�ָ�룬���õľ������ñ����ʼ��ָ�����õģ��ҳ�ʼ��֮���ܸı� 
	return 0;
}
int main()
{
	string myf,myl;                  
	//string����int������˵��������������string��ͷ�ļ� #include <string>,�ܺõ�һ���Ǳ�string����ı���������Ϊ���飬��myf[0]��ָ���ַ�����һ����ĸ
	cout<<"please enter your first name: ";
	cin>>myf;
	cout<<"please enter your last name: ";
	cin>>myl;			 			//getline(cin,myl,'\n');
	//��cin��ࡣ��һ���ַ�����myl��֪������\n����(\n�������myl)����Ȼgetline�����\n�������κ��ַ��������������ַ��������룬�����˴˷���ǰ���ַ����� 
	string myfullname=myf+" "+myl;   //string�������ݿ����� + ���ַ����������� 
	cout<<"hi,"<<myfullname<<endl;   //cout<<"hi,"<<myf+" "+myl<<endl;
	int x=5,y=6,a;
	int *p1=&x,*p2=&y,&r1=x,&r2=y;	//r1,r2�����õĳ�ʼ���������ʼ��������дint &r1. 
	swap1(p1,p2);					
	//��ȻҲ����ֱ��swap1(&x,&y);&x,&y��ʹ��ͬ����swap1�����ָ������;�����Ͳ���p1,p2��ʼ��Ϊx,y�� 
	a=swap1(p1,p2);					//��Ȼ�˴�a=0,�Ͼ�return 0. 
	cout<<x<<","<<y<<","<<a<<endl;
	swap2(r1,r2);
	cout<<x<<","<<y<<endl;
	a=myf.length();					
	// ����a=myf.size()�����Ǽ����ַ����е��ַ������޲�𣬰�����<string>ͷ�ļ��� 
	return 0;						//��Ȼ�������C�����п��Բ�д��������д�϶�ϵͳ����ִ�к�Щ�� 
}

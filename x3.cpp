#include <iostream>
#include <string>
using namespace std;
// 增加换值的两种方法
int swap1(int *p1,int *p2)
{
	int temp;
	temp=*p1; *p1=*p2; *p2=temp;	//通过指针访问变量，进而交换变量 
	return 0;						//此函数用来交换数值，无返回值，return 0让函数正常结束，下同 
} 
int swap2(int &r1,int &r2)
{
	int temp;
	temp=r1; r1=r2; r2=temp;     
	//此为引用，类似简化的指针，不好的就是引用必须初始化指向有用的，且初始化之后不能改变 
	return 0;
}
int main()
{
	string myf,myl;                  
	//string类似int等类型说明符，不过调用string需头文件 #include <string>,很好的一点是被string定义的变量可以视为数组，如myf[0]即指此字符串第一个字母
	cout<<"please enter your first name: ";
	cin>>myf;
	cout<<"please enter your last name: ";
	cin>>myl;			 			//getline(cin,myl,'\n');
	//和cin差不多。读一行字符串给myl，知道遇到\n结束(\n不会读进myl)。当然getline里面的\n可以是任何字符，代表遇到此字符结束读入，读入了此符号前的字符串。 
	string myfullname=myf+" "+myl;   //string类型数据可以用 + 把字符串连接起来 
	cout<<"hi,"<<myfullname<<endl;   //cout<<"hi,"<<myf+" "+myl<<endl;
	int x=5,y=6,a;
	int *p1=&x,*p2=&y,&r1=x,&r2=y;	//r1,r2是引用的初始化，必须初始化，不能写int &r1. 
	swap1(p1,p2);					
	//当然也可以直接swap1(&x,&y);&x,&y的使用同函数swap1里面的指针类型;此语句就不用p1,p2初始化为x,y了 
	a=swap1(p1,p2);					//显然此处a=0,毕竟return 0. 
	cout<<x<<","<<y<<","<<a<<endl;
	swap2(r1,r2);
	cout<<x<<","<<y<<endl;
	a=myf.length();					
	// 或者a=myf.size()，都是计算字符串中的字符数，无差别，包含在<string>头文件里 
	return 0;						//虽然此语句在C语言中可以不写，但还是写上对系统程序执行好些。 
}

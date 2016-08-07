#include <iostream>
#define M(y) y*y+3*y
using namespace std;
int main(){	
	int a=3;
	typedef int Int;
	Int b=4;
	typedef int INT[10];	
	INT c;					//typedef替换数组定义，此处相当于int c[10];
	typedef int* Pint;
	Pint p;					//typedef替换指针定义，此处相当于int *p;
	p=c;
	*p=5;
	*(p+1)=6;
	*(p+2)=M(5);			//宏
	Pint pp;
	pp=new int[10];			//new,delete分配释放内存必须成对使用
	delete []pp;
	cout<<a<<" "<<b<<" "<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<endl;
	return 0;
}

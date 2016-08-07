#include <iostream>
using namespace std;
struct ST{
	int num;
	char *name;
};							//结构申明完，;必须写
struct STU  				//结构名一般大写
{
	int j;
	char k;
	int *p;
	double m[10];
	ST  student;			//结构套结构，ST必须提前申明
};
struct STU a,STU,*point;	//关键字sturct可以省略，变量名STU可以和类型名STU(结构)同名，但成员名不能与类型名同名；
int main(){
	a.j=3;
	a.student.num=1002;		//引用用".",结构套结构就多次"."
	point=&STU;				//指针必须被赋值，即给出其指向的对象
	point->k='b';
	cout<<a.j<<" "<<a.student.num<<" "<<(*point).k<<endl;
	return 0;
}

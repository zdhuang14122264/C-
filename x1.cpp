#include <iostream>
#include <iomanip>
using namespace std;
#define M(y) y*y+3*y
int main(int argc,char **argv)  //char*argv[]
{
	auto int i=8,k;				//auto可以省略 
	static int j=9;				//static静态参量 
	k=M(5);
	cout<<setw(10)<<left<<++i<<--i<<"\n";	
	//setw函数是用于设置字宽的函数，通过left/right决定左右对齐方式，直接打空格没用。该函数在<iomanip>头文件里 
	cout<<setfill('-')<<setw(10)<<i++<<i--<<j<<k<<endl;
	//setfill函数是用指定字符填充，可以不是空格，但需要和setw函数配合使用 
	cout<<setprecision(3)<<2.71828<<endl;
	cout<<1.412<<endl;
	//setprecision函数控制输出数字的位数，而且适当的输出（四舍五入），对于输出格式化的数据，还是建议使用printf
	cout<<"ox"<<setbase(16)<<32<<endl;
	//届时32将输出其16进制的数字
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
#define M(y) y*y+3*y
int main(int argc,char **argv)  //char*argv[]
{
	auto int i=8,k;				//auto����ʡ�� 
	static int j=9;				//static��̬���� 
	k=M(5);
	cout<<setw(10)<<left<<++i<<--i<<"\n";	
	//setw���������������ֿ�ĺ�����ͨ��left/right�������Ҷ��뷽ʽ��ֱ�Ӵ�ո�û�á��ú�����<iomanip>ͷ�ļ��� 
	cout<<setfill('-')<<setw(10)<<i++<<i--<<j<<k<<endl;
	//setfill��������ָ���ַ���䣬���Բ��ǿո񣬵���Ҫ��setw�������ʹ�� 
	cout<<setprecision(3)<<2.71828<<endl;
	cout<<1.412<<endl;
	//setprecision��������������ֵ�λ���������ʵ���������������룩�����������ʽ�������ݣ����ǽ���ʹ��printf
	cout<<"ox"<<setbase(16)<<32<<endl;
	//��ʱ32�������16���Ƶ�����
	return 0;
}

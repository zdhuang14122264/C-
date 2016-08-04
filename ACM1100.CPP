#include <iostream>
using namespace std;
int qua(int x)
{
	int a=0,fs,ss;
	if((x%8)==1){
		fs=x/8;
		if((fs%8)==1){
			ss=fs/8;
			if(ss%8==7)
				a=ss/8;
		}
	}
	return a;
}
int main()
{
	int i=2,x,a;
	while(1){
		x=(i*17+15)*17+4;
		a=qua(x);
		if(i==2*a){
			cout<<x<<endl;
			break;
		}
		else
			i++;
	}
	return 0;
}

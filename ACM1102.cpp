#include <iostream>
using namespace std;
int pd(int a){
	int flag=1,i=2;
	for(;i<=a/2;i++)
		if(a%i==0&&40%i==0){
			flag=0;
			break;
		}
	return flag;
}
int main(){
	int flag,i;
	for(i=1;i<40;i++){
		flag=pd(i);
		if(flag==1)
			cout<<i<<"/40,";
	}
	return 0;
}
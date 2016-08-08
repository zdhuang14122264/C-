#include <iostream>
using namespace std;
int js(int a){
	int i=1;
	double s=0;
	for(;i<=a;i++)
		s+=1/i;
	return s;
}
int main(){
	int i=1,a;
	cin>>a;
	while(1){
		if(js(i)<=a)
			i++;
		else
			break;
	}
	cout<<i;
	return 0;
}

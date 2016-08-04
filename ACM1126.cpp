#include <iostream>
using namespace std;
int cal(int x){
	if(x%2==0){
		cout<<x<<"/2="<<x/2<<endl;
		x=x/2;
	}
	else{
		cout<<x<<"*3+1="<<x*3+1<<endl;
		x=x*3+1;
	}
	return x;
}
int main(){
	int a;
	cin>>a;
	while(a!=1){
		a=cal(a);
	}
	return 0;
}

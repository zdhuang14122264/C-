#include <iostream>
using namespace std;
int mm(int a){
	int x1=0,x2=1,x;
	if(a==1)
		return x1;
	else{
		for(int i=3;i<=a;i++){
			x=(i-1)*(x1+x2);
			x1=x2;
			x2=x;
		}
		return x2;
	}
}
int main(){
	int a;
	while(cin>>a)
		cout<<mm(a)<<endl;
	return 0;
}

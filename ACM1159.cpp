#include <iostream>
using namespace std;
int cal(int x){
	int i=1,a=3;
	for(;i<=x;i++)
		a=2*(a-1);
	return a;
}
int main(){
	int a[10],b[10],count,i;
	cin>>count;
	for(i=0;i<count;i++){
		cin>>a[i];
		b[i]=cal(a[i]);
	}
	for(i=0;i<count;i++)
		cout<<b[i]<<endl;
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int ah(int a[],int b[]){
	int i=0,m=0;
	for(;i<7;i++)
		m=max(m,a[i]+b[i]);
	if(m<=8)
		m=0;
	return m;
}
int main(){
	int a[7],b[7];
	for(int i=0;i<7;i++)
		cin>>a[i]>>b[i];
	cout<<ah(a,b);
	return 0;
}

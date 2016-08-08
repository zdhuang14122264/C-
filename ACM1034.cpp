#include <iostream>
#include <algorithm>
using namespace std;
int js(int n){
	int count=1;
	while(n!=1){
	if(n%2==0)
		{ n=n/2; count++;}
	else
		{ n=3*n+1 ;count++;}
	}
	return count;
}
int xz(int i,int j){
	int ma=-1;
	for(int a=i;a<=j;a++)
		ma=max(ma,js(a));
	return ma;
}
int main(){
	int i,j,ma;
	while(cin>>i>>j){
		int a=min(i,j);
		int b=max(i,j);
		ma=xz(a,b);
		cout<<i<<" "<<j<<" "<<ma<<endl;
	}
	return 0;
}

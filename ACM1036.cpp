#include <iostream>
using namespace std;
int hs(int h,int a,int l){
	for(int i=1;i<=l;i++){ 
		cout<<a;
		if(i<l)
			cout<<" ";
		else
			cout<<endl; 
		a+=h+i;
	}
	return 0;
}
int main(){
	int n,h,a,l;
	cin>>n;
	for(h=a=1,l=n;h<=n;h++,l--){
		hs(h,a,l);
		a+=h;
	}
	return 0;
}

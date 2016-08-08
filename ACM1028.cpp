#include <iostream>
using namespace std;
int js(int l){
	int i=1,s=0,a;
	for(;i<=l;i++){
		cin>>a;
		s+=a;
	}
	return s;
}
int main(){
	int n,l;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l;
		cout<<js(l)<<endl;
	}
	return 0;
}
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
	int l;
	while(cin>>l)
		cout<<js(l)<<endl;
	return 0;
}
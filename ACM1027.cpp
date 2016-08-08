#include <iostream>
using namespace std;
int main(){
	while(1){
		int i=1,s=0,a,l;
		cin>>l;
		if(l!=0){
			for(;i<=l;i++){
				cin>>a;
				s+=a;
			}
			cout<<s<<endl;
		}
		else
			break;
	}
	return 0;
}
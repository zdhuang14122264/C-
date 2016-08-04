#include <iostream>
#include <string>
using namespace std;
int main(){
	string mys;
	int l;
	getline(cin,mys,'\n');
	l=mys.length();
	for(int i=0;i<l;i++){
		if('A'<=mys[i]&&mys[i]<='Z')
			mys[i]+=32;
		cout<<mys[i];
	}
	return 0;
}

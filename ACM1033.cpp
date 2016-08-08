#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int n,i=1;
	string str,ch;
	cin>>n;
	getchar();
	while(i<=n){
		getline(cin,str,'\n');
		cout<<str<<endl<<endl;
		i++;
	}
	while(cin>>ch)
		cout<<ch<<endl<<endl;
	return 0;
}

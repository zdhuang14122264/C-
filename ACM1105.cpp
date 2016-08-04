#include <iostream>
#include <string>
using namespace std;
int main()
{
	string mys;
	int i=0,j=0,l;
	cin>>mys;
	l=mys.length();
	for(;i<l;i++)
		cout<<mys[i];
	for(;j<l;j++)
		cout<<mys[l-1-j];
	return 0;
}

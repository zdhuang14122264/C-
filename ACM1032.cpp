#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	// string str;
	// int l,ls;
	// getline(cin,str);
	// l=str.length();
	// for(int i=0;i<l;i++){
	// 	ls=l-i-1;
	// 	cout<<str[ls];
	// }
	return 0;
}

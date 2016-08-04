#include <iostream>
using namespace std;
int zs(char ch){
	if(('A'<=ch&&ch<='Z')||('a'<=ch&&ch<='z'))
		return 1;
	else
		return 0;
}
int main(){
	int i,l,flag,count=0;
	string mys;
	cin>>mys;
	l=mys.size();
	for(i=0;i<l;i++){
		flag=zs(mys[i]);
		if(flag==1)
			count++;
	}
	cout<<count;
	return 0;
}
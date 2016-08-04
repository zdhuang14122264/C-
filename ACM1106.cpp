#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int a,al,sum=0,s,i;
	cin>>a;
	al=a*a*a;
	s=a*a-a+1;
	for(i=1;i<=a;i++){
		sum+=s;
		s+=2;
	}
	if(al==sum)
		printf("%d*%d*%d=%d",a,a,a,al);
	printf("\n%d",0);
	return 0;
}

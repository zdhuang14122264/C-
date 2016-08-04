#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int i,j,a[4],temp;
	for(i=0;i<4;i++)
		cin>>a[i];
	for(i=0;i<4-1;i++){
		for(j=0;j<4-i-1;j++)
			if(a[j]>a[j+1]){
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
	}
	for(i=0;i<4;i++)
		printf("%d ",a[i]);
	return 0;
}
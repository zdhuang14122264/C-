#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int i,j,a[10],temp;
	for(i=0;i<10;i++)
		cin>>a[i];
	for(i=0;i<10-1;i++){
		for(j=0;j<10-i-1;j++)
			if(a[j]<a[j+1]){
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
	}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}

#include <iostream>
using namespace std;
int ys(int x){
	int sum=0;
	for(int i=1;i<=x/2;i++){
		if(x%i==0)
			sum+=i;
	}
	return sum;
}
int main(){
	int i=1,sum;
	for(;i<=3000;i++){
		sum=ys(i);
		if((i==ys(sum)&&i!=sum)&&i<sum)
			cout<<"("<<i<<","<<sum<<")";
	}
	return 0;
}
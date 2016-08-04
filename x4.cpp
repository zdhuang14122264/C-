#include <iostream>
using namespace std;
int printnum(int num){
	cout<<num;
	if(num<9)
		printnum(num+1);
	cout<<num;
	return 0;
}
int main(){
	printnum(1);
	return 0;
}
//循环递归输出回文序列
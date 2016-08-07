#include <iostream>
using namespace std;
int fib(int n){
	switch(n){
		case(0):return 0;
		case(1):return 1;
		case(2):return 1;
	}
	return fib(n-1)+fib(n-2);
}
int printnum(int num){
	cout<<num;
	if(num<9)
		printnum(num+1);
	cout<<num;
	return 0;
}
int main(){
	cout<<fib(8)<<endl;
	printnum(1);
	return 0;
}
//循环递归输出回文序列，以及斐波那契序列。
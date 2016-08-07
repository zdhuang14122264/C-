#include <iostream>
using namespace std;
template<typename T1,typename T2>
class CSum
{
	public:
		CSum()
		{	result=0;}
		~CSum(){}
		void show(void)
		{
			cout<<"结果="<<result<<endl;
		}
		void sum(T1 x,T1 y)
		{
			result=x+y;
		}
		void sum(T1 x,T2 y)
		{
			result=x+y;
		}
		void sum(T2 x,T2 y);
	private:
		T1 result;
};
template<typename S1, typename S2>
void CSum<S1,S2>::sum(S2 x,S2 y)
{
	result=x+y;
}
int main(){
	CSum<char,double> one;
	one.sum(2,'a');		
	one.show();
	CSum<int,double> two;
	two.sum(5,5);		
	two.show();
	return 0;
}

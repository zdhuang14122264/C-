#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

template<class T>
class TB{
public:
	TB(T a,T b);
	T add();
private:
	T a;
	T b;
};

template<class T>
TB<T>::TB(T a,T b){
	this->a=a;
	this->b=b;
}

template<class T>
T TB<T>::add(){
	return a+b;
}

template<class T,class T1>
T sum(T a,T1 b){
	return a+b;
}



class TY{
	public :
	TY(){
		a="hahahhaha";
		b="bbbbbbbbb";
	}
	void operator +=(TY b){
		this->a=b.a+this->a;
		this->b=b.b+this->b;
	}
	void print(){
		cout<<a<<endl;
		cout<<b<<endl;
	}
	private :
	string a;
	string b;
};


int main(){

	TY a;
	TY b;
	
	a.print();
	b.print();
	a+=b;
	a.print();


	// TB<TY>a(1,3);
	// cout<<a.add()<<endl;
	// cout<<sum(1,2)<<endl;

}
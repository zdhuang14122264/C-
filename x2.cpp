#include <locale>
#include <iostream>
#include <string>
using namespace std;

int main()
{	string Test;
	int count = 0;
	cout << "String ?: ";
	cin >> Test;
	cin.get();
	for(int i = 0; i < Test.length(); i++){
	    char c = Test[i];
		if(isupper(c) == true){
			count += 1;
		}
	}
}

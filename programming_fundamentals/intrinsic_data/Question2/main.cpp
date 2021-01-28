#include <iostream>

using namespace std;

int main(void) {
	int a = 5;
	int *p = &a;
	int &r = a;
	const int i = 6;

	++*p;
	++r;
	cout << "Value of 'a' after increase via reference and pointers " << a << endl;
	//++i; 
	cout << "Value of const integer: " << i << endl;

	int hex = 0xf3f2;
	int oct = 0437;
	char c = 'a';

	cout << (int)hex << endl;
	cout << (int)oct << endl;
	cout << (int)c << endl;
	return 0;
}

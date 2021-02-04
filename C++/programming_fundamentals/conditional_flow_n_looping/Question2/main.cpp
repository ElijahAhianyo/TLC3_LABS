#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	int first, second;

	char op;
	auto res = 0;

	cout << "Enter 2 values: ";
	cin >> first >> second;
	cout << "Enter operator: ";
	cin >> op;

	switch (op) {
		case '*':
			res = first * second;
			break;
		case '+':
			res = first + second;
			break;
		case '/':
			res = first / second;
			break;
		case '%':
			res = first % second;
			break;
	}

	cout << first << op << second << " = " << res << endl;
	return 0;
}

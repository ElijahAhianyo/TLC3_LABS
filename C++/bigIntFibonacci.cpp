#include <iostream>
using namespace std;

uint64_t f(uint64_t n) {
	if (n <= 1)
		return 1;
	return f(n-1) + f(n-2);
}

int main() {
	uint64_t number;
	cin >> number;
	cout << f(number) << endl;
	return 0;
}

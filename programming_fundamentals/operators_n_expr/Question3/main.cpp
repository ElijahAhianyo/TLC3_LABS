#include <iostream>

using namespace std;


unsigned int rotate(unsigned int s, unsigned int r) {
	return (s << r);
}

int main(void) {
	unsigned int s, r;

	cout << "Input two values: ";
	cin >> s >> r;

	r = rotate(s, r);
	cout << "Original: " << hex << s << endl;
	cout << "Rotated: " << hex << r << endl;
	return 0;
}

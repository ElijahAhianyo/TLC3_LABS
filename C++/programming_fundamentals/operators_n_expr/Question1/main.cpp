#include <iostream>

using namespace std;


char getChar() {
	static char c;
	cin >> c;
	return c;
}

int main(void) {
	char c;
	int limit = 2;
	int i = 0;

	if (i < limit-1) {
		c = getchar();
		if (c != '\n')
			if ( c != 'A')
				cout << c << endl;
	}

	return 0;
}

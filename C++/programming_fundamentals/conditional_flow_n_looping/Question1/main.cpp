#include <iostream>
#include <cstring>

using namespace std;

int main(void) {

	char input_line[] {"C++ ? programming ? language ?"};
	int count=0, i = 0;
	
	int max_length = strlen(input_line);
	
	while (i < max_length) {
		if (input_line[i] == '?')
			++count;
		++i;
	}

	cout << count << endl;
	return 0;
}

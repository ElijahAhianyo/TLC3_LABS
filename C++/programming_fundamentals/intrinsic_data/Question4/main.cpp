#include <iostream>
#include <cstring>

using namespace std;


int main(void) {
	typedef string string_array[10];
	
	string_array str;
	int len;
	int previous_largest_index = -1;
	int previous_highest_len = -1;
	
	int index = 0;
	cout << "Enter a string-" << index + 1 << " ";
	while (true) {
		cin >> str[index];
		len = str[index].length();
		
		if (len > previous_highest_len) {
			previous_largest_index = index;
			previous_highest_len = len;
		}
		index += 1;
		if (index == 10) break;
		cout << "Enter a string-" << index + 1 << " ";
	}

	if (previous_largest_index != -1)
		cout << "The largest string is " << str[previous_largest_index] << endl;

	return 0;
}

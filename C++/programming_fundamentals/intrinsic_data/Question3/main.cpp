#include <iostream>
#include <cstring>

using namespace std;


int main(void) {
	char str[100];
	char container[100];

	cout << "Enter a string: ";
	while(cin.getline(str, 100)) {
		if (str != nullptr) {
			int index = 0;
			for (int i=0; i<100; i++) {
				if (str[i] == '\0') break;	
				
				if (str[i] == '-' && i != 0) {
					container[index] = '\0';
					cout << "[" << strlen(container) << "]" << "\t" <<container << endl;
				       	index = 0;
					continue;	
				}

				container[index] = str[i];
				index += 1;	
			}
		}
		cout << "Enter a string: ";
	}
	return 0;
}

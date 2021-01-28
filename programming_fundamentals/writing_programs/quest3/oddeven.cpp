#include <iostream>
using namespace std;

#define NUMBER_OF_ROWS_MULTIPLICATION_TABLE 20

int getInput() {
	int number;
	cout<<"Enter an integer: ";
	cin >> number;
	return number;
}


int main(void) {
	int num = getInput();

	if (num % 2 == 0 ){
		for (int index=0; index<NUMBER_OF_ROWS_MULTIPLICATION_TABLE; index++) {
			cout << index << " x " << num << " = " << (index * num) << endl; 
		}
	} else {
		int count = 0; int index = 0;

		while (true) {
			index += 1;

			if (index % 3 != 0) {
				cout << index << endl;
				count += 1;
			}
			if (count == 30) break;

		}
	}
	return 0;
}

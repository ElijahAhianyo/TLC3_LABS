#include <iostream>
#include <stdlib.h>

const int* enterNumbers(int input_num) {
	int* values = (int *)malloc(sizeof(int));
	int number;

	for (int index=0; index<input_num; index++) {
		std::cout << "Enter number" << index+1 << ": ";
		std::cin >> number;
	       	values[index] = number;	
	}
	return values;	
}

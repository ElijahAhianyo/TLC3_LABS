#include<iostream>
#include "values.h"

using namespace std;

#define NUMBER_OF_INPUTS 5

int main(void) {
	const int *values = enterNumbers(NUMBER_OF_INPUTS);
	double sum = 0;

	for (int i=0; i<NUMBER_OF_INPUTS; i++) {
		sum += *(values+i);
	}

	double mean = sum / NUMBER_OF_INPUTS;

	cout << "The mean is: " << mean << endl; 

	return 0;
}

#include <iostream>
#include <stdlib.h>
#include "values.h"

using namespace std;

#define NUMBER_OF_INPUTS 5


typedef struct Match {
	int number;
	int freq;
} match_type;


match_type* getMatch(int number, match_type *match_list[]) {
	match_type *val = NULL;
	int val_index = 0;

	for (int index=0; index<NUMBER_OF_INPUTS; index++) {
		val = *(match_list + index);
		val_index = index;
		if (val == NULL || val->number == number) break;
	}

	if (val == NULL) {
		val = (match_type*)malloc(sizeof(match_type));
		val->number = number;
		val->freq = 0;
		match_list[val_index] = val;
	}
	return val;
}


int main(void) {
	const int *values = enterNumbers(NUMBER_OF_INPUTS);
	match_type* val = NULL;
	match_type* modal = NULL;

	match_type *match_list[NUMBER_OF_INPUTS+1] = {0}; 
	
	for (int index=0; index<NUMBER_OF_INPUTS; index++) {
		int num = *(values + index);
		val = getMatch(num, match_list);
		val->freq += 1;	
	}
	
	for (int index=0; index<NUMBER_OF_INPUTS; index++) {
		val = match_list[index];

	        if (val == NULL) break;	
		if (modal == NULL || modal->freq < val->freq)
			modal = val;	
	}

	cout << "The modal is: " << modal->number << " with frequency of: "<< modal->freq << endl;
	for (int index=0; index<NUMBER_OF_INPUTS; index++)
		free(match_list[index]);
	
	return 0;
}

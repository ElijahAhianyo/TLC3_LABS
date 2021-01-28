#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

char *get_word(char *w=NULL) {
	if (w == NULL)
		return (char *)malloc(20 * sizeof(char));
	return (char *)realloc(w, 10 * sizeof(char));
}

int main(void) {
	string str;
	char *word;
	//int len;
	int index = 0;
	int memory_usage_count = 0;

	vector <char*> tokens;

	getline(cin, str);
	
	word = get_word();
	
	for (char c: str) {
		if (memory_usage_count == 20) {
			get_word(word);
			memory_usage_count = 0;	
		}

		if (c == '\0' || c == ' ' || c == '\t' || c == '\v') {
			word[index] = '\0';
			index = 0;
			tokens.push_back(word);
			memory_usage_count = 0;
			word = NULL;
			word = get_word();
			continue;
		}
		word[index] = c;
		index += 1;
		memory_usage_count += 1;	
	}

	for (auto v: tokens) { 
		cout << v << endl;
			//free(v);	
	}
	
	return 0;
}

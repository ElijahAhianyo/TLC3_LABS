#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <errno.h>

using namespace std;

const char* reverse(const char *s) {
	int len = strlen(s) - 1;
	char *ret = (char *)malloc((len + 1)*sizeof(char));
	if (ret == NULL){
		perror("malloc");
		return NULL;
	}
	int index = 0;
	
	while (*s) {
		ret[len-index] = *s++;
		index += 1;
	}
	ret[len + 1] = '\0';
	return ret;
}

int main(void) {
	char str[100];
	
	cout << "Enter a text: ";
	cin.get(str, 100);
	char *ret = const_cast<char*>(reverse(str));
	cout << "Reverse of the text is: " << ret << endl;
	//free(ret);
	return 0;
}

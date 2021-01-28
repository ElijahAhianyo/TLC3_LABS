#include <iostream>
#include <cmath>

using namespace std;


int main(void) {
	unsigned int p, index=0;
	while (++index, p=pow(2, index), cout<<p<<endl, index < 10);
	return 0;
}

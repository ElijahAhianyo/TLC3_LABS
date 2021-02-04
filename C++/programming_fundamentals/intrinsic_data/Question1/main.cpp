#include <iostream>
using namespace std;

int main(void) {
	typedef enum {RED, YELLOW, AMBER=YELLOW, GREEN} Color;
	cout << "RED = " << Color::RED << endl;
	cout << "YELLOW = " << Color::YELLOW << endl;
	cout << "AMBER = " << Color::AMBER << endl;
	cout << "GREEN = " << Color::GREEN << endl;
	return 0;
}

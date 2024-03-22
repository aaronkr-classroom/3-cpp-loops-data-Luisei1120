//chp2ex8
#include <iostream>

using std::cout; using std::endl;

int main() {
	for (int x = 1; x <= 10; x++) {
		for (int y = 1; y <= 10; y++) {
			cout << x * y;
			cout << endl;	
		}
	}
	return 0;
}
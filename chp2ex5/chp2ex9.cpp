//chp2ex9
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	cout << "첫번째 숫자를 입력하시오: ";
	int a;
	cin >> a;

	cout << "두번재 숫자를 입력하시오: ";
	int b;
	cin >> b;
	
	if (a > b) {
		cout << a << "이(가)" << b << "보다 더 큽니다.";
	}
	else{
		cout << b << "이(가)" << a << "보다 더 큽니다.";

	}
	return 0;
}
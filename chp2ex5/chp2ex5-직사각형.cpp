//chp2ex5 직사각형
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "가로 길이: ";

	int size;
	cin >> size;

	cout << "세로 길이: ";

	int size2;
	cin >> size2;

	for (int l = 0; l < size; l++) {

		for (int s = 0; s < size2; s++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
//chp2ex5 ���簢��
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "������ ũ��: ";

	int size;
	cin >> size;
	for (int l = 0; l < size; l++) {

		for (int s = 0; s < size; s++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
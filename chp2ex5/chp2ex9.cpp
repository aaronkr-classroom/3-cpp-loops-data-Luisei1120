//chp2ex9
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	cout << "ù��° ���ڸ� �Է��Ͻÿ�: ";
	int a;
	cin >> a;

	cout << "�ι��� ���ڸ� �Է��Ͻÿ�: ";
	int b;
	cin >> b;
	
	if (a > b) {
		cout << a << "��(��)" << b << "���� �� Ů�ϴ�.";
	}
	else{
		cout << b << "��(��)" << a << "���� �� Ů�ϴ�.";

	}
	return 0;
}
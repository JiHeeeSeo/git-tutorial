#include <iostream>
using namespace std;

int main() {
	////int n1, n2, n3;
	//int x = 23.67;
	//double y = 130;

	///*cout << "ù ��° ���� �Է�: ";
	//cin >> n1;
	//cout << "�� ��° ���� �Է�: ";
	//cin >> n2;

	//n3 = n1 + n2;
	//cout << "�� ������ ��: " << n3<<endl;*/


	//cout << "x�� �ڷ���: " << typeid(x).name() << endl;
	//cout << "y�� �ڷ���: " << typeid(y = 130).name() << endl;

	double x = 23.56;
	int y = 30;

	cout << "ĳ���� X: " << x + y << endl;
	cout << "ĳ���� O: " << static_cast<int>(x) + y << endl;


	return 0;
}

/*���� �ذ� �����ڸ� ����ϴ� ���α׷�
Scope Resolution Operator*/

#include <iostream>
using namespace std;

int num = 5;

int main() {
	int num = 25;
	cout << "���� ���� num�� �� = " << ::num << endl;
	cout << "���� ���� num�� �� = " << num << endl;
	return 0;
}
/* �����ͷ� ������ ����ؼ� �Լ��� ������
2���� ���� �����ϴ� ���α׷�*/
#include <iostream>
using namespace std;

void swap(int* first, int* second);

int main() {
	// ���� 2�� ����
	int x = 10;
	int y = 20;

	// �����ϱ� ���� x�� y�� �� ���
	cout << "�����ϱ� ���� x�� y�� ��" << endl;
	cout << "x: " << x << " " << "y: " << y << endl;

	// swap �Լ��� ȣ���ؼ� ���� x�� y ����
	swap(&x, &y);
	cout << "���� ���� x�� y�� ��" << endl;
	cout << "x: " << x << " " << "y: " << y << endl;
	return 0;
}

void swap(int* pX, int* pY) {
	int tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}
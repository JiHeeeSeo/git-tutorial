/* ������ ������ ����ؼ�
�Լ��� ������ 2���� ���� �����ϴ� ���α׷�*/

#include <iostream>	
using namespace std;

void swap(int& first, int& second);		// ������Ÿ��(�Լ� ����)

int main() {
	// ���� 2�� ����
	int x = 10;
	int y = 20;

	// �����ϱ� ���� x�� y�� �� ���
	cout << "�����ϱ� ���� x�� y�� ��" << endl;
	cout << "x: " << x << " " << "y: " << y << endl;

	// swap �Լ��� ȣ���ؼ� ���� x�� y����
	swap(x, y);
	
	// ���� �Ŀ� ���� x�� y�� �� ���
	cout << "���� ���� x�� y�� ��" << endl;
	cout << "x: " << x << " " << "y: " << y << endl;
	return 0;
}

/* �Ű������� ���޵� ���� �����ϴ� swap �Լ�
������ ������ ����ؼ�
main���� ���޹��� ������ ���� ��ȯ*/
void swap(int& rX, int& rY) {
	int temp = rX;
	rX = rY;
	rY = temp;
}
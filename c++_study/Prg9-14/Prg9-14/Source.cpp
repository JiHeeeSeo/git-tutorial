/* �� �޸𸮿� ũ�Ⱑ �������� �迭�� �����
�����ͷ� ��ҿ� �����ϴ� ���α׷�*/

#include <iostream>
using namespace std;

int main() {
	// ���ÿ� �迭�� ���� ũ��� ������ ����
	int size;
	int* pArray;
	// ����ڷκ��� 0���� ū �迭�� ũ�� �Է¹ޱ�
	do {
		cout << "0���� ū �迭�� ũ�⸦ �Է��ϼ���: ";
		cin >> size;
	} while (size <= 0);

	// ���� �迭 ����
	pArray = new int[size];
	// �迭�� �� �Է¹ޱ�
	for (int i = 0; i < size; i++) {
		cout << i << "��° ����� ���� �Է��ϼ���: ";
		cin >> *(pArray + i);
	}
	// �迭�� ��� ���
	cout << "�迭 ������ ���" << endl;
	for (int i = 0; i < size; i++)
		cout << *(pArray + i) << " ";

	// ������ �迭 ����
	delete[] pArray;
	return 0;
}
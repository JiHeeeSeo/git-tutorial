// �����͸� ����ؼ� �迭�� �Ųٷ� ����� ���α׷�
#include <iostream>
using namespace std;

void reverse(int*, int);

int main() {
	// �迭 ����, �ʱ�ȭ
	int arr[5] = { 10, 11, 12, 13, 14 };
	// �Լ� ȣ��
	reverse(arr, 5);
	cout << "�迭 �Ųٷ� ���: ";
	for (int i = 0; i < 5; i++) {
		cout << *(arr + i) << "  ";
	}
	return 0;
}

// �迭�� ���� �����Ϳ� �迭�� ũ�⸦ �Ű������� ���޹޾Ƽ� �迭�� �Ųٷ� �����ϴ� �Լ�
void reverse(int* pArr, int size) {
	int i = 0;
	int j = size - 1;
	while (i < size / 2) {
		int temp = *(pArr + i);
		*(pArr + i) = *(pArr + j);
		*(pArr + j) = temp;
		i++;
		j--;
	}
}
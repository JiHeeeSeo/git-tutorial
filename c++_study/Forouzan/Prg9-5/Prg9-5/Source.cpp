/* ������ ������ ���� ���� �Ǵ� ���� �����ؼ� ����ϴ� ���α׷� */
#include <iostream>
using namespace std;

int main() {
	// ���� ����� �ʱ�ȭ
	int score = 92;
	int* pScore = &score;

	// ������ ������ ���� ���� �Ǵ� �������� ����
	cout << "score�� ���� �����ϱ�: " << score << endl;
	cout << "score�� ���� �����ϱ�: " << *pScore << endl;
	return 0;
}
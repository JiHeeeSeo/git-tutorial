/* ���� ������ ���� ������ �����ϰ�
�ʱ�ȭ�� �ڿ� ������ ������ ����� 
���� �����ϴ� ����� �����ִ� ���α׷�*/

#include <iostream>	
using namespace std;

int main() {
	// ���� ���踦 ����
	int score = 92;
	int& rScore = score;
	
	// ������ ������ ����ؼ� ����
	cout << "������ ������ ����ؼ� ���� �����ϱ�" << endl;
	cout << "socre: " << score << endl;

	// ���� ������ ����ؼ� ����
	cout << "���� ������ ����ؼ� ���� �����ϱ�" << endl;
	cout << "rScore: " << rScore << endl;
	return 0;
}
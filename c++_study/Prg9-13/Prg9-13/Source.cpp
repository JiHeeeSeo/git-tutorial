/* ���α׷��� �����ϴ� ���� ����ؼ� �޸𸮿� �����ϴ� ��������, ���� ������ ����ϴ� ���α׷�*/
#include <iostream>
using namespace std;

int first = 20;				// ���� �޸� ���� �ö󰡴� ���� ����
static int second = 30;		// ���� �޸� ���� �ö󰡴� ���� ���� ����

int main() {
	static int third = 50;	// ���� �޸� ���� �ö󰡴� ���� ����

	cout << "���� ������ ��: " << first << endl;
	cout << "���� ���� ������ ��: " << second << endl;
	cout << "���� ���� ������ ��: " << third<<endl;
}
/* �־��� ������ ������ ���ڸ� 
�����ϴ� Ŭ������
����, �����ϰ� ����ϴ� ���α׷�*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*RandomInteger Ŭ���� ����
(������ ��� ����� ��� �Լ� ����)*/
class RandomInteger {
private:
	int low;
	int high;
	int value;
public:
	RandomInteger(int low, int high);		// ������
	~RandomInteger();						// �Ҹ���
	// �ռ� ���� �������� ���� ����
	RandomInteger(const RandomInteger& random) = delete;
	void print() const;						// ������ ��� �Լ�
};

/*RandomInteger Ŭ������
������, �Ҹ���, ������ ��� �Լ� ����*/

// ������
RandomInteger::RandomInteger(int lw, int hh) :low(lw), high(hh) {
	srand(time(0));
	int temp = rand();
	value = temp % (high - low + 1) + low;
}

// �Ҹ���
RandomInteger::~RandomInteger(){}

// ������ ��� �Լ�
void RandomInteger::print() const {
	cout << value << endl;
}

/* ���� ���� ��ü�� �ν��Ͻ�ȭ�ϰ� ��(������ ����)�� ����ϴ� ���ø����̼�*/
int main() {
	// 100~200 ������ ���� ���� ����
	RandomInteger r1(100, 200);
	cout << "100~200 ������ ������ ����: ";
	r1.print();

	// 400~600 ������ ���� ���� ����
	RandomInteger r2(400, 600);
	cout << "400~600 ������ ������ ����: ";
	r2.print();

	// 1500~2000
	RandomInteger r3(1500, 2000);
	cout << "1500~2000 ������ ������ ����: ";
	r3.print();
	return 0;
}
/* �� ���� �м��� ����� larger �Լ��� ȣ���ؼ�
�� �߿� ū ���� ã�� ���α׷�*/
#include "fraction.h"

Fraction& larger(Fraction&, Fraction&);

int main() {
	// ù ��° ���� ����� ū �� Ž��
	Fraction fract1(3, 13);
	Fraction fract2(5, 17);
	cout << "ù ��° �ֿ��� �� ū �м�: ";
	larger(fract1, fract2).print();

	// �� ��° ���� ����� ū �� Ž��
	Fraction fract3(4, 9);
	Fraction fract4(1, 6);
	cout << "�� ��° �ֿ��� �� ū �м�: ";
	larger(fract3, fract4).print();
	return 0;
}

/* Fraction ��ü�� ������ �ް�
�� ū ���� ã�Ƽ� �����ϴ� �Լ�	*/
Fraction& larger(Fraction& fract1, Fraction& fract2) {
	if (fract1.getNumer() * fract2.getDenom() > fract2.getNumer() * fract1.getDenom()) {
		return fract1;
	}
	return fract2;
}
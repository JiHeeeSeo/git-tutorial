/*extern
extern Ű����� '�ܺο� �����Ѵ�'��� ���̴�.
��� ���� C/C++���� obj ���Ϸ� ��ũ�� �Ǹ鼭 ���������
������ ���� ������ ������� �� �ִ� Ű������ �� �� �ִ�.

�� extern Ű������ Ȱ��� ���� ������ ������
�ʺ����� ���뿡���� '��������'�� ������ش�.
�� �����θ� �����ص� ����ϴ�.*/


#include "Header.h"

int MyClass::static_member_int = 1;

int main() {
	MyClass::static_member_int = 100;
	printf("%d", MyClass::static_member_int);

	return 0;

}

void MyClass::foo() {


}

void MyClass::goo() {

}
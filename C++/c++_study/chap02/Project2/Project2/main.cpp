#include "header.h"

int main() {
	float value1, value2,result;
	char oper;
	int cr = rand() % 5;
	bool flag = true;

	value1 = getValue();
	value2 = getValue();
	oper = getChar();

	switch (oper){
	case 'p':
		result = pow(value1, value2);
		break;
	case 'x':
		exit(-1);
		break;
	case 'r':
		
		switch (cr) {
		case 0:
			result = value1+value2;
			break;
		case 1:
			result = value1 - value2;
			break;
		case 2:
			result = value1 * value2;
			break;
		case 3:
			result = value1 / value2;
			break;
		case 4:
			result = (int)value1%(int)value2;
			break;
		}
		break;
	default:
		flag = false;
		printf("�߸��� �Է��� �߽��ϴ�.\n");
		break;
	}
	if (flag)
		printf("�Է°��� %c�̰� ���� ���� %.2f�Դϴ�.\n", oper, result);


}

float getValue() {
	float input;
	fseek(stdin, 0, SEEK_END);
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf_s("%f", &input);
	return input;
}

char getChar() {
	char input;
	fseek(stdin, 0, SEEK_END);
	printf("Char���� �Է��ϼ���: ");
	scanf_s("%c", &input, sizeof(input));
	return input;
}

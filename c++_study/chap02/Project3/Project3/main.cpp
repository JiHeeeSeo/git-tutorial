#include "Header.h"

int main() {

	char input1[100];
	char input2[100];

	printf("���ڿ��� �Է��ϼ���: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input1);

	printf("���ڿ��� �ѹ� �� �Է��ϼ���: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input2);

	bool same = true;
	for (int i = 0;; i++) {
		if (input1[i] == '\0') break;
		if (input1[i] != input2[i]) same = false;
	}
	if (same)
		printf("�� ���ڿ��� �����ϴ�.\n");
	else
		printf("�� ���ڿ��� �ٸ��ϴ�\n");

	return 0;

}
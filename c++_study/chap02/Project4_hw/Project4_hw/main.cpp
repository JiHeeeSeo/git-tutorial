#include "Header.h"	

int main() {
	char input[100];
	int count=0;

	printf("���ڿ��� �Է��ϼ���: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);

	for (int i = 0;; i++) {
		if (input[i] == '\0') {
			count = i;
			break;
		}
	}
	for (int i = count-1; i >= 0; i--) {
		printf("%c", input[i]);
	}
	printf("\n");

}
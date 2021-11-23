#include "Header.h"

int main() {

	char input1[100];
	char input2[100];

	printf("문자열을 입력하세요: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input1);

	printf("문자열을 한번 더 입력하세요: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input2);

	bool same = true;
	for (int i = 0;; i++) {
		if (input1[i] == '\0') break;
		if (input1[i] != input2[i]) same = false;
	}
	if (same)
		printf("두 문자열을 같습니다.\n");
	else
		printf("두 문자열은 다릅니다\n");

	return 0;

}
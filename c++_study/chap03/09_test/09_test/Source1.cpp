#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

void reverse(const char* str) {
	if (*str == '\0') return;
	else {
		reverse(str+1);
		printf("%c", *str);
	}
}

int main() {
	char input[100];
	scanf("%99[^\n]s", input);

	reverse(input);
	printf("\n");

	return 0;
}
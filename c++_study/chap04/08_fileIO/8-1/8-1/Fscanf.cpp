#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	FILE* infile = fopen("text.txt", "r");
	char input[100];
	fscanf(infile, "%99[^\n]s", input);
	fclose(infile);

	printf("%s", input);

	return 0;
}
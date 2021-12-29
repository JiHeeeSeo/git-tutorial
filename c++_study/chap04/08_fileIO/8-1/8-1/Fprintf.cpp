#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	FILE* infile = fopen("text.txt", "w");
	fprintf(infile, "Hello World");
	fclose(infile);

	return 0;
}
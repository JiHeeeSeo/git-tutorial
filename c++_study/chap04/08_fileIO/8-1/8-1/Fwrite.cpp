#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	/*FILE* infile = fopen("text1.txt", "w");
	int value = 487651;
	fwrite(&value, sizeof(int), 1, infile);
	fclose(infile);*/

	FILE* infile = fopen("text2.txt", "w");
	int value[5] = { 1,2,5, 10, 20 };
	fwrite(value, sizeof(int), 5, infile);
	fclose(infile);

	printf("");
	

	return 0;
}
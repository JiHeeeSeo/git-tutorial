#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	

	/*FILE* infile = fopen("text1.txt", "r");
	int value;
	fread(&value, sizeof(int), 1, infile);
	fclose(infile);

	printf("%d", value);*/

	FILE* infile = fopen("text2.txt", "r");
	int value[5];
	fread(&value, sizeof(int), 5, infile);
	fclose(infile);

	for (int i = 0; i < 5; i++) {
		printf("%d ", value[i]);
	}
	
	return 0;
}
#include <cstdio>

int main() {
	int v[5] = { 1,2,3,4,5 };
	int index = 2;
	v[index++] = 10;
	for (int i = 0; i < 5; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");

	int v1[5] = { 1,2,3,4,5 };
	index = 2;
	v1[++index] = 10;
	for (int i = 0; i < 5; i++) {
		printf("%d ", v1[i]);
	}
	printf("\n");

}
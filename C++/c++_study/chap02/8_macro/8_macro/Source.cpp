#include <cstdio>

#define SWAP(X, Y, TYPE) TYPE temp = v1; v1 = v2; v2 = temp;

int main() {
	int v1 = 100;
	int v2 = 200;

	SWAP(v1, v2, int);

	printf("v1 = %d\n", v1);
	printf("v2 = %d\n", v2);

	return 0;
}
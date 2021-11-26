#include <cstdio>

void foo(int params) {
	int category1 = 1;
	int category2 = 1 << 1;
	int category3 = 1 << 2;

	if ((category1 & params) != 0)
		printf("카테고리1에 포함됩니다.\n");
	if ((category2 & params) != 0)
		printf("카테고리2에 포함됩니다.\n");
	if ((category3 & params) != 0)
		printf("카테고리3에 포함됩니다.\n");
}

int main() {
	int v1 = 1;
	int v2 = 3;

	int bitwise_or = v1 | v2;
	printf("%d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("%d\n", bitwise_and);

	int shift_left = v2 << 1;
	printf("shift_left: %d\n", shift_left);

	int shift_right = v2 >> 1;
	printf("shift_rigth: %d\n", shift_right);

	printf("\n");
	foo(1 | 4);

	return 0;
}
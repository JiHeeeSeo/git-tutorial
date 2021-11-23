#include "Header.h"

int main() {
	int v1;
	int v2;

	int result;
	int min;
	int mul;
	float div;

	int* pv1 = &v1;
	int* pv2 = &v2;
	int* presult = &result;
	int* pmin = &min;
	int* pmul = &mul;
	float* pdiv = &div;
	

	*pv1 = getInt();
	*pv2 = getInt();
	*presult = *pv1 + *pv2;
	*pmin = *pv1 - *pv2;
	*pmul = *pv1 * *pv2;
	*pdiv = (float)*pv1 / *pv2;


	printf("%d + %d = %d\n", v1, v2, result);
	printf("%d - %d = %d\n", v1, v2, min);
	printf("%d * %d = %d\n", v1, v2, mul);
	printf("%d / %d = %.2f\n", v1, v2, div);

	return 0;
}

int getInt() {
	int input;
	printf("숫자를 입력해 주세요: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}
#include <cstdio>

#define AVG(N1, N2, N3, N4, N5) (N1+N2+N3+N4+N5)/5

int main() {

	float result;

	result = AVG(2.0,2,2,2,3);
	printf("%.2f", result);

	return 0;
}
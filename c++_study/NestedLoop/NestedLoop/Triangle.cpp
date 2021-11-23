#include <cstdio>

int main() {
	
	int myArray[20];

	for (int i = 0; i < 20; i++) {
		myArray[i] = (i + 1) * 2;
	}
	for (int i = 0; i < 20; i++) {
		printf("myArray[%d] = %d\n", i,myArray[i]);
	}

	return 0;
}
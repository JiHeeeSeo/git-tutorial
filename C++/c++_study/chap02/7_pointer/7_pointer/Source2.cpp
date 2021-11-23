#include <cstdio>
#include <cstdlib>

struct Marine {
	int hp = 40;
	int atk = 6;
};

int main() {
	
	Marine** marine;

	marine = (Marine**)malloc(sizeof(Marine*) * 20);
	for (int i = 0; i < 20; i++) {
		marine[i] = (Marine*)malloc(sizeof(Marine) * 4);
		for (int k = 0; k < 4; k++) {
			marine[i][k].atk = 9;
		}
	}

	for (int i = 0; i < 20; i++) {
		for (int k = 0; k < 4; k++)
			printf("marine[%d][%d]->atk = %d\n", i,k, marine[i][k].atk);
	}

	return 0;
}
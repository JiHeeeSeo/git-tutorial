#include <cstdio>
#include <cstdlib>

struct Marine {
	int hp = 40;
	int atk = 6;
};

int main() {
	
	Marine* marine[40] = { nullptr, };

	for (int i = 0; i < 40; i++) {
		marine[i] = (Marine*)malloc(sizeof(Marine));
		marine[i]->hp = 40;
		marine[i]->atk = 7;
	}

	for (int i = 0; i < 40; i++)
		printf("marine[%d].atk = %d\n", i, marine[i]->atk);

	return 0;

}
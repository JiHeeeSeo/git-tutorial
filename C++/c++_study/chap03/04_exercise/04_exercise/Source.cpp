#include "Header.h"

int main() {

	Fantasy* units[5] = { nullptr, };
	srand(time(0));

	for (int i = 0; i < 5; i++) {
		switch (rand() % 3)
		{
		case 0:
			units[i] = new ShortSword();
			break;
		case 1:
			units[i] = new LongSword();
			break;
		case 2:
			units[i] = new Hammer();
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < 5; i++)
		units[i]->printInfo();

	return 0;
}
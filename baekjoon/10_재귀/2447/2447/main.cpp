#include <cstdio>
#include <iostream>

using namespace std;


void recu(int n);

int main() {
	int n;
	cin >> n;

	recu(n);
}




void recu(int n) {
	int div = n / 3;

	if (n == 3) {
		for (int i = 1; i <= n; i++) {
			for (int k = 1; k <= n; k++) {
				if (i == 2 && k == 2) {
					printf(" ");
					continue;
				}
				printf("*");
			}
			printf("\n");
		}
		return;
	}

	for (int i = 1; i <= n; div++) {
		for (int k = 1; k <= n; div++) {
			recu(div);
			if (i == 1 + div && k == 1 + div)
				continue;
		}
		printf("\n");
	}

}


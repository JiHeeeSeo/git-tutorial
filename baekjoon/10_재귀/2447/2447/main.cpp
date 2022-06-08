#include <cstdio>
#include <iostream>

using namespace std;


void recu(int i, int j, int n);

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			recu(i, j, n);
		}
		printf("\n");
	}
	
}


void recu(int i, int k, int n) {
	int div = n / 3;

	if (div == 3) {

		if (i%3 == 2 && k%3 == 2) {
			printf(" ");
		}
		else
			printf("*");
		return;
	}
	
	if (i == (div * 4 + 1) && k==(div*4+1)) {
		
	}
	else
		recu(i, k, div);

}


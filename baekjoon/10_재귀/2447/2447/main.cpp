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

	if (n == 3) {

	}


	// ctl+shift+/
	/*if (i == (1+n/3) && k==(1+n/3)) {
		printf(" ");
	}
	else {
		if (n == 3)
			printf("*");
		else
			recu(i, k, n / 3);
	}*/
	
}


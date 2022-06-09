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

		if (i % 3 == 2 && k % 3 == 2) {
			printf(" ");
		}
		else
			printf("*");
		return;
	}

	
	if ((i%n>=(1+n/3) && i%n<= 2*(n/3)) && (k%n >= (1 + n / 3) && k%n <= 2 * (n / 3))) {
		// �ۼ�Ʈ�� ����� ������ �κе� ������ ��	
		printf(" ");
	}
	else {
		recu(i, k, n / 3);
	}
	
}


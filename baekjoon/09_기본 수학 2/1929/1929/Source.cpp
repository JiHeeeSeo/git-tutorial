#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n1, n2;
	cin >> n1;
	cin >> n2;

	for (int i = n1; i <= n2; i++) {
		if (i == 1)
			continue;
		if (i == 2||i==3) {
			printf("%d\n", i);
			continue;
		}
		int cn = (int)sqrt(i);
		int check = 0;
		for (int k = cn; k > 1; k--) {
			if (i % k == 0) {
				check++;
				break;
			}
		}

		if (check == 0) {
			printf("%d\n", i);
		}
	}
}
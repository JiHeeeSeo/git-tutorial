#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int n, sum, k;
	cin >> n;

	int result = 0;
	
	for (int i = (n-1); i > 0; i--) {
		sum = i;
		k = i;
		while (k > 0) {
			sum += k % 10;
			k /= 10;
		}
		if (sum == n) {
			result = i;
		}
	}
	printf("%d", result);

}
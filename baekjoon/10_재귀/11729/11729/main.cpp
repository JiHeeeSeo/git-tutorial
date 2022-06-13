#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;
void recu(int n, int start, int by, int end);

int main() {
	int n;
	cin >> n;

	printf("%d\n", (int)pow(2.0, n) - 1);
	recu(n, 1, 2, 3);

}

void recu(int n, int start, int by, int end) {
	if (n == 1) {
		printf("%d %d\n", start, end);
		return;
	}
	recu(n - 1, start, end, by);
	printf("%d %d\n", start, end);
	recu(n - 1, by, start, end);

}
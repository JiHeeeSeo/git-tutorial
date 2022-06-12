#include <cstdio>
#include <iostream>

using namespace std;
void recu(int n, int start, int end);

int main() {
	int n;
	cin >> n;


}

void recu(int n, int start, int end) {
	if (n == 1) {
		printf("%d %d\n", start, end);
	}
	recu(n - 1, start, end);



}
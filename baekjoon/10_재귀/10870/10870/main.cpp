#include <cstdio>
#include <iostream>


using namespace std;

int fib(int n);

int main() {
	int n;

	cin >> n;

	printf("%d", fib(n));

}

int fib(int n) {
	if (n == 1 || n == 0) {
		return n;
	}
	else
		return fib(n - 2) + fib(n - 1);
}
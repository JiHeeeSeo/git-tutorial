#include <cstdio>


int main() {
	int arr[3] = { 1,2,3 };
	int arr2[3] = { 1,2,3 };

	printf("%d %d %d %d\n", arr[-1], arr[-2], arr[4], arr[5]);
	printf("%d %d %d %d\n", arr2[-1], arr2[-2], arr2[4], arr2[5]);
}
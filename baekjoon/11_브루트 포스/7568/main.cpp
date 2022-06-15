#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[50][3] = { 0 };

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 2; k++) {
			cin >> arr[i][k];
		}
		arr[i][2] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int k = 0; k < i; k++) {
			// 키 몸무게 둘 다 클 때
			if (arr[k][0] > arr[i][0] && arr[k][1] > arr[k][1]) {
				arr[i][2] = arr[i][2]+1;
			}
			// 키, 몸무게 둘 다 작을 때
			else if (arr[k][0] < arr[i][0] && arr[k][1] < arr[k][1]) {
				arr[k][2] += 1;
			}

		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i][2]);
	}
}
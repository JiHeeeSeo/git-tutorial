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
			// Ű ������ �� �� Ŭ ��
			if (arr[k][0] > arr[i][0] && arr[k][1] > arr[k][1]) {
				arr[i][2] = arr[i][2]+1;
			}
			// Ű, ������ �� �� ���� ��
			else if (arr[k][0] < arr[i][0] && arr[k][1] < arr[k][1]) {
				arr[k][2] += 1;
			}

		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i][2]);
	}
}
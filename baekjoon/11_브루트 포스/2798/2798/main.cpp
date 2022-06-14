#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int arr[100]={0};

	// 0~ n-1±îÁö ÀÔ·ÂµÊ
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum;
	int result=0;
	
	for (int i = n-1; i >= 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			for (int k = j - 1; k >= 0; k--) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= m) {
					if (sum > result)
						result = sum;
				}
			}
		}
	}

	printf("%d", result);

}
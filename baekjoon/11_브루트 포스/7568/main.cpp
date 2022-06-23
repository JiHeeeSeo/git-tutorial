#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[50][3] = { 0 };
	int w_n, h_n, r_n;
	int w_b, h_b, r_b;
	int before_i;

	// 한 줄씩 입력
	for (int i = 0; i < n; i++) {
		// 한 줄에는 [몸무게, 키, 순위]
		cin >> w_n >> h_n;

		if (i == 0) {
			r_n = 1;
		}
		// 순위 비교
		else {
			before_i = i--;
			w_b = arr[i - 1][0];
			h_b = arr[i - 1][1];
			r_b = arr[i - 1][2];

			if (w_n > w_b && h_n > h_b) {
				if (r_b == 1) {
					r_n == 1;
					// 전전 것들 rank up 해주기
					for (int k = i - 1; k >= 0; k--) {
						arr[k][2]++;
					}
				}
				else {

				}
			}
			else if (w_n < w_b && h_n < h_b) {
				for (int k = i - 2; k >= 0; k--) {
					w_b = arr[k][0];
					h_b = arr[k][1];
					r_b = arr[k][2];
					if (w_n < w_b && h_n < h_b) {

					}
					else {

					}
				}
			}
			else {
				r_n = r_b;
			}
			

		}

		arr[i][0] = w_n;
		arr[i][1] = h_n;
		arr[i][2] = r_n;
	}

	//for (int i = 0; i < n; i++) {
	//	for (int k = 0; k < 2; k++) {
	//		cin >> arr[i][k];
	//	}
	//	arr[i][2] = 1;
	//}

	//for (int i = 1; i < n; i++) {
	//	for (int k = 0; k < i; k++) {
	//		// 키 몸무게 둘 다 클 때
	//		if (arr[k][0] > arr[i][0] && arr[k][1] > arr[k][1]) {
	//			arr[i][2] = arr[i][2]+1;
	//		}
	//		// 키, 몸무게 둘 다 작을 때
	//		else if (arr[k][0] < arr[i][0] && arr[k][1] < arr[k][1]) {
	//			arr[k][2] += 1;
	//		}

	//	}
	//}

	//for (int i = 0; i < n; i++) {
	//	printf("%d ", arr[i][2]);
	//}
}
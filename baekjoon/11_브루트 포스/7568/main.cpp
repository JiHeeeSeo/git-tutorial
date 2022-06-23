#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[50][3] = { 0 };
	int w_n, h_n, r_n;
	int w_b, h_b, r_b;
	bool rankUp = false;


	for (int i = 0; i < n; i++) {
		cin >> w_n >> h_n;

		if (i==0) {
			arr[i][0] = w_n;
			arr[i][1] = h_n;
			arr[i][2] = 1;
		}
		else {
			for (int k = i - 1; k >= 0; k--) {
				if (rankUp) {
					arr[k][2]++;
					continue;
				}
					
				w_b = arr[k][0];
				h_b = arr[k][1];
				r_b = arr[k][2];

				if (w_b < w_n && h_b < h_n) {
					arr[i][2] = 1;
					arr[i][0] = w_n;
					arr[i][1] = h_n;
					
					rankUp = true;
				}
 				else if (w_b > w_n && h_b > h_n) {
					if (k == 0) {
						arr[i][2] = i - k;
						arr[i][0] = w_n;
						arr[i][1] = h_n;

						break;
					}
					continue;
				}
				else {
					arr[i][2] = r_b;
					arr[i][0] = w_n;
					arr[i][1] = h_n;

					break;
				}

			}
		}
		printf("------------------\n");
		for (int k = 0; k <=i; k++) {
			printf("%d 번째 배열: %d %d %d\n",k, arr[k][0], arr[k][1], arr[k][2]);
		}
		printf("------------------\n\n");
		

	}

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i][2]);

}
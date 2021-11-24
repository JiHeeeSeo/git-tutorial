#include <cstdio>

int main() {
	int userBlock[3][3] = {
			{0, 0, 0},
			{0, 1, 0},
			{1, 1, 0}
	};
	int tmp[3][3] = { 0, };

	for(int i = 0; i<3; i++){
		for (int k = 0; k < 3; k++) {
			tmp[i][k] = userBlock[3 - k-1][i];
			printf("%d ", tmp[i][k]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			userBlock[i][k] = tmp[i][k];
		}
	}


	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			printf("%d ", userBlock[i][k]);
		}
		printf("\n");
	}
	
	return 0;
}
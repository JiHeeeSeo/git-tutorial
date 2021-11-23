#include <cstdio>

void printArr(int arr[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++)
			printf("%d ", arr[i][k]);
		printf("\n");
	}
}
int main() {
	int arr1[5][5];
	int arr2[5][5];
	int arr3[5][5];

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			arr1[i][k] = (k+1) + (i*5);
			arr2[i][k] = arr1[i][k] * 2;
			arr3[i][k] = arr1[i][k] + arr2[i][k];
		}
	}

	printf("arr1\n");
	printArr(arr1);
	printf("\narr2\n");
	printArr(arr2);
	printf("\narr3\n");
	printArr(arr3);


}
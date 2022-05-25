/* 포인터를 사용해서 배열의 요소에
접근하는 방법을 보여주는 프로그램*/

#include <iostream>
using namespace std;

int getSum(const int*, int);


int main() {
	int arr[5] = { 10, 11, 12, 13,14 };
	cout << "요소의 합: " << getSum(arr, 5)<<endl;
	return 0;
}

int getSum(const int* p, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(p++);
	}
	return sum;
}
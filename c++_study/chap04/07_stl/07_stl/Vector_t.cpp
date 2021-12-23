#include <cstdio>
#include <vector>
#include <algorithm>
/*
	std::vector<T>

	std::vector<T>는 vector 헤더파일에 작성되어 있다. 이 std::vector를 활용하게 되면 유동적인 배열을 편안하게 활용할 수 있다.
	std::vector<T>는 우리가 일반적으로 배열을 사용하듯 사용할 수 있으며 std::vector는 iterator(순회자)를 통해 각각의 원소를 순회할 수 있고
	이 순회자를이용해 algorithm에 작성되어있는 sort(...)함수를 이용해 값을 정렬할 수 있다.*/

/* 순회자(iterator)
순회자는 기본 자료구조들이 갖고 있는 원소 탐색 객체입니다. 이 탐색 객체를 이용하면 원소들을 차례대로 가져올 수 있고 물론 이 순회자를 이용해 for루프를
돌 수도 있습니다. 순회자의 값을 가져올 때에는 포인터의 값을 가져오는 것 처럼 *(애스터리스크) 연산자를 활용한다.

for(auto it = v.begin(); it !=v.end(); it++{
...
}
*/

/* auto
auto 키워드는 컴파일러가 추론 가능한 데이터 타입을 자동으로 지정해 줄 수 있다.
auto를 이용해 굉장히 긴 클래스명이나 데이터타입을 짧게 줄일 수 있어 많이 사용된다.*/

int main() {
	
	/*
	std::vector<int> myvec = { 10, 20, 30 };

	myvec.push_back(100);
	myvec.push_back(200);
	myvec.push_back(300);

	myvec[2] = 55;
	*/

	std::vector<int> myvec = { 40, 1, 5,4,10,7 };

	std::sort(myvec.begin(), myvec.end());

	/*for (int i = 0; i < myvec.size(); i++) {
		printf("%d ", myvec[i]);
	}*/

	/*for (std::vector<int>::const_iterator it = myvec.begin(); it != myvec.end(); it++) {
		printf("%d ", *it);
	}*/

	for (auto it = myvec.begin(); it != myvec.end(); it++) {
		printf("%d ", *it);
	}

	return 0;
}
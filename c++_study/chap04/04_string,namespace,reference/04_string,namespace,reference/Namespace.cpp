#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace hong {
	void foo();

	class Marine {
	public:
		Marine();
		void printInfo(int i, const char* name);
	};
}

namespace kim {
	void foo();
}

int main() {
	//hong::foo();
	//kim::foo();

	string mystr = "Hello World";

	printf("%s\n", mystr.c_str());

	return 0;
}
void hong::foo() {
	printf("홍길동이 만든 함수 foo() 입니다.\n");
}

void kim::foo() {
	printf("김말동이 만든 함수 foo()입니다.\n");
}

hong::Marine::Marine() {

}

void hong::Marine::printInfo(int i, const char* name) {

}
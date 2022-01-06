#include <cstdio>
#include <functional>
#include <string>

void foo() {
	printf("Hello World");
}

int sum(int value1, int value2) {
	return value1 + value2;
}

class Marine {
public:
	void attactTo(const char* target) {
		printf("마린은 %s를 공격했다\n", target);
	}
};

int main() {
	Marine* m = new Marine();
	
	auto local_sum = std::bind(sum, std::placeholders::_1, std::placeholders::_2);
	int result = local_sum(10, 20);
	printf("result: %d\n", result);


	auto attack = std::bind(&Marine::attactTo, m, std::placeholders::_1);
	attack("히드라");

	return 0;

}
#include <cstdio>
#include <functional>
#include <string>

class Person {
public:
	std::string name;
};

int main() {
	Person* p = new Person();
	p->name = "Henry";

	auto foo = [=](int value1, int value2) -> int {
		if (value1 > 0) {
			return value1 + value2;
		}
	};

	return 0;
}
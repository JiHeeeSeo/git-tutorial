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

	std::function<void()> foo = [&]() {
		printf("Hello World %s\n", p->name.c_str());
	};

	

	foo();

	return 0;
}
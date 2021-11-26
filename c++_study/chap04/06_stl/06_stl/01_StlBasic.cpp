#include <cstdio>
#include <string>

template <typename T>
class MyClass {
public:
	T value;
};

template <typename T>
void swap(T* a, T* b) {
	T tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	MyClass<int>* m = new MyClass<int>();
	m->value = 10;;
	MyClass<std::string>* ms = new MyClass<std::string>();
	ms->value = "Hello World";

	std::string value1 = "Hello";
	std::string value2 = "World";

	swap<std::string>(&value1, &value2);

	printf("value1: %s\n", value1.c_str());
	printf("value2: %s\n", value2.c_str());

	return 0;
}
#include <cstring>
#include <cstdio>
#include <string>

class Vector {
public:
	float x;
	float y;
	Vector(float x, float y) {
		this->x = x;
		this->y = y;
	}
};

void swap(std::string& a, std::string& b) {
	std::string temp;
	temp = a;
	a = b;
	b = temp;
}

Vector operator+(Vector& v1, Vector& v2) {
	return Vector(v1.x + v2.x, v1.y + v2.y);
}

int main() {
	//int value1 = 100;
	//int value2 = 200;

	std::string value1 = "Hello";
	std::string value2 = "World";

	swap(value1, value2);

	printf("value1: %s\n", value1.c_str());
	printf("value2: %s\n", value2.c_str());
}
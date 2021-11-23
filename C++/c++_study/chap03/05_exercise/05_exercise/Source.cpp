#include "Header.h"

/*
내가 한 것 ^^,,
class Vector3 {
public:
	float x, y, z;

	Vector3(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void printInfo() {
		printf("%.2f, %.2f, %.2f\n", x, y, z);
	}
};

Vector3 operator+(Vector3& v1, Vector3& v2) {
	return Vector3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

int main() {
	Vector3 v1 = Vector3(1, 2, 3);
	Vector3 v2 = Vector3(10, 20, 30);

	Vector3 v3 = v1 + v2;
	v3.printInfo();

	return 0;
}
*/
Matrix operator+(Matrix& m1, Matrix& m2) {
	return Matrix(
		m1.v11 + m2.v11, m1.v12 + m2.v12, m1.v13 + m2.v13,
		m1.v21 + m2.v21, m1.v22 + m2.v22, m1.v23 + m2.v23,
		m1.v31 + m2.v31, m1.v32 + m2.v32, m1.v33 + m2.v33
	);
}

int main() {
	Matrix m1 = Matrix(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matrix m2 = Matrix(10, 20, 30, 40, 50, 60, 70, 80, 90);

	Matrix result = m1 + m2;
	result.printInfo();

	return 0;
}
#include <cstdio>

class Matrix {
public:
	float v11, v12, v13;
	float v21, v22, v23;
	float v31, v32, v33;

	Matrix(float v11, float v12, float v13, float v21, float v22, float v23, float v31, float v32, float v33) {
		this->v11 = v11;
		this->v12 = v12;
		this->v13 = v13;
		this->v21 = v21;
		this->v22 = v22;
		this->v23 = v23;
		this->v31 = v31;
		this->v32 = v32;
		this->v33 = v33;
	}

	void printInfo() {
		printf("%.2f, %.2f, %.2f\n", v11, v12, v13);
		printf("%.2f, %.2f, %.2f\n", v21, v22, v23);
		printf("%.2f, %.2f, %.2f\n", v31, v32, v33);
	}
};



/*��ü ���� ���α׷��ֿ��� Ŭ������ ����ϴ� ��*/	

#include <iostream>	
using namespace std;

/* Ŭ���� ����
�Ű����� ������, �⺻������,
���������, �Ҹ���, ��� �Լ��� ���� */
class Circle {
private:
	double radius;
public:
	Circle(double radius);			// �Ű������� �ִ� ������
	Circle();						// �⺻ ������
	~Circle();						// �Ҹ���
	Circle(const Circle& circle);	// ���� ������
	void setRadius(double radius);	// ������
	double getRadius() const;		// ������
	double getArea() const;			// ������
	double getPerimeter() const;	// ������
};

/* ����Լ� ����
�Ű������� �ִ� ������, �⺻ ������, ���������, �Ҹ���, ��� �Լ��� ����*/

// �Ű������� �ִ� �������� ����
Circle::Circle(double rds)
	:radius(rds) {
	cout << "�Ű������� �ִ� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

// �⺻ �������� �ǹ�
Circle::Circle()
	: radius(0.0) {
	cout << "�⺻ �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

// ���� �������� ����
Circle::Circle(const Circle& circle)
	: radius(circle.radius) {
	cout << "���� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
}

// �Ҹ����� ����
Circle::~Circle() {
	cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�: " << radius;
	cout << endl;
}

// setRadius ��� �Լ��� ����
void Circle::setRadius(double value) {
	radius = value;
}

// getRadius ��� �Լ��� ����
double Circle::getRadius() const {
	return radius;
}

// getArea ��� �Լ��� ����
double Circle::getArea() const {
	const double PI = 3.14;
	return (PI * radius * radius);
}

// getPerimeter ��� �Լ��� ����
double Circle::getPerimeter() const {
	const double PI = 3.14;
	return(2 * PI * radius);
}

/* ���ø����̼�:
Circle Ŭ������ ��ü�� 3��(circle, circle2, circle3) �����
��� �Լ� ȣ���ϱ�	*/

int main() {
	// circle1 �ν��Ͻ�ȭ �Ŀ� ��� �Լ� ȣ���ϱ�
	Circle circle1(5.2);
	cout << "Radius: " << circle1.getRadius() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;
	// circle2 �ν��Ͻ��� �Ŀ� ��� �Լ� ȣ���ϱ�
	Circle circle2(circle1);
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;
	// circle3 �ν��Ͻ�ȭ �Ŀ� ��� �Լ� ȣ���ϱ�
	Circle circle3;
	cout << "Radius: " << circle3.getRadius() << endl;
	cout << "Area: " << circle3.getArea() << endl;
	cout << "Perimeter: " << circle3.getPerimeter() << endl<< endl;

	// �Ҹ��� ȣ�� ����
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	////int n1, n2, n3;
	//int x = 23.67;
	//double y = 130;

	///*cout << "첫 번째 숫자 입력: ";
	//cin >> n1;
	//cout << "두 번째 숫자 입력: ";
	//cin >> n2;

	//n3 = n1 + n2;
	//cout << "두 숫자의 합: " << n3<<endl;*/


	//cout << "x의 자료형: " << typeid(x).name() << endl;
	//cout << "y의 자료형: " << typeid(y = 130).name() << endl;

	double x = 23.56;
	int y = 30;

	cout << "캐스팅 X: " << x + y << endl;
	cout << "캐스팅 O: " << static_cast<int>(x) + y << endl;


	return 0;
}

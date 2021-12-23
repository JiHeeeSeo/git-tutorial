#include <cstdio>
#include <string>

template <typename T>
class MyArray {
private:
	T* arrayItem;		// 배열 포인터(고정배열)
	int count = 0;
	int capacity = 8;
public:
	// 고정배열 초기화
	MyArray() {
		arrayItem = new T[capacity];
	}

	// 소멸자(소멸할 때 메모리 해제)
	virtual ~MyArray() {
		delete[] arrayItem;
	}

	void putValue(T value) {
		if (capacity <= count) {
			printf("배열의 캐파시티가 두배로 늘어났습니다.\n");
			// 새로운 크기로 만들어줌
			T* newarray = new T[capacity * 2];
			capacity = capacity * 2;

			// 기존 값을 복사해 주는 과정
			for (int i = 0; i < count; i++) {
				newarray[i] = arrayItem[i]; 
			}
			// 이전 배열 삭제하고 새로운 배열을 이전 배열(arrayItem)에 넣는거구나,,,
			// newArray 삭제하고 앉아있었슴,,
			delete[] arrayItem;
			arrayItem = newarray;
		}
		arrayItem[count] = value;
		count++;
				
	}

	int getCount() {
		return count;
	}

	T getValue(int index) {
		return arrayItem[index];
	}
};

int main() {
	// 정적인 형태로 만들기
	MyArray<int> m = MyArray<int>();

	m.putValue(100);
	m.putValue(200);
	m.putValue(300);
	m.putValue(400);
	m.putValue(500);
	m.putValue(600);
	m.putValue(700);
	m.putValue(800);
	m.putValue(900);

	for (int i = 0; i < m.getCount(); i++) {
		printf("%d ", m.getValue(i));
	}

	return 0;
}
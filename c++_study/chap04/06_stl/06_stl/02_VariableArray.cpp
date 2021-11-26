#include <cstdio>
#include <string>

template <typename T>
class MyArray {
public:
	T* arrayItem;
	int count = 0;
	int capacity = 8;

	MyArray() {
		arrayItem = new T[capacity];
	}

	virtual ~MyArray() {
		delete[] arrayItem;
	}

	void putValue(T value) {
		if (capacity <= count) {
			printf("배열의 캐파시티가 두배로 늘어났습니다.\n");
			T* newarray = new T[capacity * 2];
			capacity = capacity * 2;
			for (int i = 0; i < count; i++) {
				newarray[i] = arrayItem[i];
			}
			// 이전 배열 삭제하고 새로운 배열을 이전 배열(arrayItem)에 넣는거구나,,,
			// newArray 삭제하고 앉아있었슴,,
			delete[] arrayItem;
			arrayItem = newarray;
		}
		arrayItem[count++] = value;
		count++;
				
	}
};

int main() {
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

	for (int i = 0; i < m.count; i++) {
		printf("%d ", m.arrayItem[i]);
	}

	return 0;
}
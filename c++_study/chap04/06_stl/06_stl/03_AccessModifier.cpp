#include <cstdio>
#include <string>

template <typename T>
class MyArray {
private:
	T* arrayItem;
	int count = 0;
	int capacity = 8;
public:
	MyArray() {
		arrayItem = new T[capacity];
	}

	virtual ~MyArray() {
		delete[] arrayItem;
	}

	void putValue(const T& value) {
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
	MyArray<std::string> m = MyArray<std::string>();

	m.putValue("apple");
	m.putValue("banana");
	m.putValue("candy");
	m.putValue("delta");
	m.putValue("eclipse");
	m.putValue("forge");
	m.putValue("golf");
	m.putValue("house");
	m.putValue("integer");

	for (int i = 0; i < m.getCount(); i++) {
		printf("%s ", m.getValue(i).c_str());
	}

	return 0;
}
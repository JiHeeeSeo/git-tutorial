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

	// &레퍼런스로 들어가면 값복사를 하는 시간을 줄일 수 있음
	// 그냥 &하면 에러가 나게 되는데 const를 붙이면 바로 이제 넣어서 변형되지 않게 사용할 수 있음.
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
	
	// value 값이 존재하는지 확인하는 함수
	bool contains(T value) {
		for (int i = 0; i < count; i++) {
			if (arrayItem[i] == value)
				return true;
		}
		return false;
	}

	// 특정 위치의 값을 변경하는 함수
	void replace(int index, T value) {
		//index가 배열 범위를 넘었을때 처리
		if (index < count) {
			arrayItem[index] = value;

		}
		//printf("%d번째 인덱스의 값이 %s로 변경되었습니다.", index, value);
	}

	// 특정 위치의 값을 삭제하는 함수 (빈 공간을 채워줘야 함)
	void erase(int index) {
		if (count - 1 == index)
			arrayItem[index] = '\0';
		else {
			for (int i = index; i < count - 1; i++)
				arrayItem[i] = arrayItem[i + 1];
			arrayItem[count - 1] = '\0';
		}
		count--;
		//printf("%d 번째 값을 삭제했습니다.\n", index);
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

	printf("\ncontains 함수 사용: %d\n", m.contains("golf"));
	
	printf("\nreplace 함수 사용\n");
	m.replace(1, "happy");
	for (int i = 0; i < m.getCount(); i++) {
		printf("%s ", m.getValue(i).c_str());
	}

	
	printf("\n\nerase 함수 사용\n");
	m.erase(3);
	for (int i = 0; i < m.getCount(); i++) {
		printf("%s ", m.getValue(i).c_str());
	}


	return 0;
}
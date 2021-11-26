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
			printf("�迭�� ĳ�Ľ�Ƽ�� �ι�� �þ���ϴ�.\n");
			T* newarray = new T[capacity * 2];
			capacity = capacity * 2;
			for (int i = 0; i < count; i++) {
				newarray[i] = arrayItem[i];
			}
			// ���� �迭 �����ϰ� ���ο� �迭�� ���� �迭(arrayItem)�� �ִ°ű���,,,
			// newArray �����ϰ� �ɾ��־���,,
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
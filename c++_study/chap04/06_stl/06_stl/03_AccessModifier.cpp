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

	// &���۷����� ���� �����縦 �ϴ� �ð��� ���� �� ����
	// �׳� &�ϸ� ������ ���� �Ǵµ� const�� ���̸� �ٷ� ���� �־ �������� �ʰ� ����� �� ����.
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
	
	// value ���� �����ϴ��� Ȯ���ϴ� �Լ�
	bool contains(T value) {
		for (int i = 0; i < count; i++) {
			if (arrayItem[i] == value)
				return true;
		}
		return false;
	}

	// Ư�� ��ġ�� ���� �����ϴ� �Լ�
	void replace(int index, T value) {
		//index�� �迭 ������ �Ѿ����� ó��
		if (index < count) {
			arrayItem[index] = value;

		}
		//printf("%d��° �ε����� ���� %s�� ����Ǿ����ϴ�.", index, value);
	}

	// Ư�� ��ġ�� ���� �����ϴ� �Լ� (�� ������ ä����� ��)
	void erase(int index) {
		if (count - 1 == index)
			arrayItem[index] = '\0';
		else {
			for (int i = index; i < count - 1; i++)
				arrayItem[i] = arrayItem[i + 1];
			arrayItem[count - 1] = '\0';
		}
		count--;
		//printf("%d ��° ���� �����߽��ϴ�.\n", index);
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

	printf("\ncontains �Լ� ���: %d\n", m.contains("golf"));
	
	printf("\nreplace �Լ� ���\n");
	m.replace(1, "happy");
	for (int i = 0; i < m.getCount(); i++) {
		printf("%s ", m.getValue(i).c_str());
	}

	
	printf("\n\nerase �Լ� ���\n");
	m.erase(3);
	for (int i = 0; i < m.getCount(); i++) {
		printf("%s ", m.getValue(i).c_str());
	}


	return 0;
}
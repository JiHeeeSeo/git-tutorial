#include <cstdio>
#include <string>

template <typename T>
class MyArray {
private:
	T* arrayItem;		// �迭 ������(�����迭)
	int count = 0;
	int capacity = 8;
public:
	// �����迭 �ʱ�ȭ
	MyArray() {
		arrayItem = new T[capacity];
	}

	// �Ҹ���(�Ҹ��� �� �޸� ����)
	virtual ~MyArray() {
		delete[] arrayItem;
	}

	void putValue(T value) {
		if (capacity <= count) {
			printf("�迭�� ĳ�Ľ�Ƽ�� �ι�� �þ���ϴ�.\n");
			// ���ο� ũ��� �������
			T* newarray = new T[capacity * 2];
			capacity = capacity * 2;

			// ���� ���� ������ �ִ� ����
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
	// ������ ���·� �����
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
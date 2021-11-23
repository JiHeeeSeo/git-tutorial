#include "Header.h"

int main() {

	Employee* employee[100];
	int count = 0;

	//1. ��� ����
	//2. ��� �߰�
	//3. ��� ����
	//4. ���α׷� ����

	while (true) {
		printf("����� �Է��ϼ���\n");
		printf("1. ��� ����\n");
		printf("2. ��� �߰�\n");
		printf("3. ��� ����\n");
		printf("4. ���α׷� ����\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			for (int i = 0; i < count; i++)
				employee[i]->printInfo();
		}
		else if (input == 2) {
			char* name = getString("����� �Է��� �ּ���: ");
			int gender = getInt("������ �Է��� �ּ���(1����, 2����): ");
			char* rank = getString("������ �Է����ּ���: ");

			Employee* e = new Employee(name, gender, rank);
			delete[] name;
			delete[] rank;

			employee[count] = e;
			count++;

		}
		else if (input == 3) {
			int number = getInt("�����ȣ�� �Է��� �ּ���: ");
			int deletedIndex = -1;

			// ��ü �迭�� Ȯ���ϰ� ���ٸ� �� ��ȣ�� �����ϴ� ��.
			for (int i = 0; i < count; i ++ ) {
				if (number == employee[i]->no) {
					delete employee[i];
					deletedIndex = i;
					//for loop Ż��
					break;
				}
			}
			if(deletedIndex >= 0){	//���� ���� ���� (-1�� �ƴϸ� ����)
				for (int i = deletedIndex; i < count-1; i++) {
					// �����ʿ� �ִ°� �������� �ϳ��� �ű�
					employee[i] = employee[i + 1];
				}
			}
			count--;
		}
		else if (input == 4) {
			// ���α׷� ����
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else {
			printf("�ùٸ��� ���� �Է��Դϴ�.\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) {
	// �����Ҵ�,�����Ͷ� ���� ����ϼ���
	char* input= new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);
	return input;
}
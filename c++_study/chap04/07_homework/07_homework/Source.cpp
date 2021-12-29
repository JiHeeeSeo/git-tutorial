#include "Header.h"	

int main() {

	Dictionary* dict = new Dictionary;

	for (;;) {
		printf("1. �ܾ� ���\n");
		printf("2. �ܾ� ã��\n");
		printf("3. ���α׷� ����\n");
		int input = getInt("�޴� ��ȣ�� �Է��ϼ���: ");
		if (input == 1) {
			// �ܾ� ���
			std::string word = getString("�ܾ �Է��ϼ���: ");
			std::string mean = getString("���� �Է��ϼ���: ");
			dict->insertworld(word, mean);
			printf("���������� ����� �Ǿ����ϴ�\n");
		}
		else if (input == 2) {
			std::string word = getString("ã�� �ܾ�: ");
			if (dict->exists(word)) {
				printf("�ܾ� ��: %s\n", dict->getMean(word).c_str());
			}
			else{ printf("���� �ܾ��Դϴ�.\n"); }
		}
		else if (input == 3) {
			printf("���α׷��� ���� �մϴ�\n");
			break;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}

	return 0;
}

int getInt(const char* prompt) {
	int input;
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

std::string getString(const char* prompt) {
	char input[100] = { 0, };
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);
	return input;
}

void Dictionary::insertworld(const std::string& word, const std::string& meaning) {
	words[word] = meaning;
}
bool Dictionary::exists(const std::string& word) {
	return words.count(word) == 1;
}
std::string Dictionary::getMean(const std::string& word) {
	return words[word];
}
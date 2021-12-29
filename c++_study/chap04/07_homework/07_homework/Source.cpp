#include "Header.h"	

int main() {

	Dictionary* dict = new Dictionary;

	for (;;) {
		printf("1. 단어 등록\n");
		printf("2. 단어 찾기\n");
		printf("3. 프로그램 종료\n");
		int input = getInt("메뉴 번호를 입력하세요: ");
		if (input == 1) {
			// 단어 등록
			std::string word = getString("단어를 입력하세요: ");
			std::string mean = getString("뜻을 입력하세요: ");
			dict->insertworld(word, mean);
			printf("정상적으로 등록이 되었습니다\n");
		}
		else if (input == 2) {
			std::string word = getString("찾을 단어: ");
			if (dict->exists(word)) {
				printf("단어 뜻: %s\n", dict->getMean(word).c_str());
			}
			else{ printf("없는 단어입니다.\n"); }
		}
		else if (input == 3) {
			printf("프로그램을 종료 합니다\n");
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
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
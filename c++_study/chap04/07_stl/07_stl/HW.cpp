#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

int getInteger(const char* prompt) {
	printf(prompt);
	int input;
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}

std::string getString(const char* prompt) {
	printf(prompt);
	char str[100] = { 0, };
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", str);
	return str;
}

int main() {
	
	std::map<std::string, std::string> member;

	while (true) {
		printf("--------------\n");
		printf("1. 단어 입력\n");
		printf("2. 단어 검색\n");
		printf("3. 종료\n");
		printf("--------------\n");

		int menu = getInteger("번호를 입력하세요: ");

		// 단어 입력
		if (menu == 1) {
			// 입력받으셈
			std::string word = getString("단어를 입력하세요: ");
			std::string means = getString("뜻을 입력하세요: ");

			// 중복인지 확인
			if (member.count(word))
				printf("중복되었습니다.\n");
			else {
				member[word] = means;
				printf("단어가 입력되었습니다\n");
			}
			printf("\n");
		}

		// 단어 검색
		else if (menu == 2) {
			bool flag = false;
			std::string find = getString("검색할 단어를 입력하세요: ");
			for (auto it = member.begin(); it != member.end(); it++) {
				// 단어 같은지 확인, 같으면~
				if (strcmp(it->first.c_str(), find.c_str()) == 0) {
					printf("뜻: %s\n", it->second.c_str());
					flag = true;
					break;
				}
			}
			if (!flag) {
				printf("찾고자 하는 단어가 없습니다.\n");
			}
			printf("\n");
		}
		else if (menu == 3) {
			printf("프로그램을 종료합니다. \n");
			break;
		}
		else
			printf("잘못된 입력입니다.\n");
	}

	return 0;
}
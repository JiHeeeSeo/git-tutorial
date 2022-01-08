#include "TypingSystem.h"

void TypingSystem::loadData(){
	FILE* infile = fopen("sentences.txt", "r");

	for (;;) {
		if (feof(infile) == 1) break;
		char line[512];
		fscanf(infile, "%511[^\n]s", line);
		fgetc(infile);
		sentences.push_back(line);

	}

	fclose(infile);
}

void TypingSystem::printData(){
	for (int i = 0; i < sentences.size(); i++) {
		printf("%s\n", sentences[i].c_str());
	}
}

void TypingSystem::start(){
	this->loadData();
	for (;;) {
		clear();
		printMenu();
		char input = getChar();

		if (input == '1' && currentUser == nullptr) {
			
			putStringOnPosition(6, 4, "아이디를 입력해주세요: ");
			std::string username = getString();
			currentUser = new User(username);
			// 로그인을 진행
			// 사용자로부터 입력을 받아서 해당 입력된 문자열을 통해
			// 문자열과 동일한 파일명이 있으면 그 파일명에서 데이터를 읽어와서
			// 평균타수, 총 타자연습횟수를 불러오는 로직을 진행
		}
		else if (input == '1' && currentUser != nullptr) {
			// 로그아웃을 진행
			delete currentUser;
			currentUser = nullptr;
		}
		else if (input == '3' && currentUser != nullptr) {
			currentUser->printUserInfo();
		}
		else if (input == 'x' || input == 'X') {
			putStringOnPosition(6, 13, "프로그램을 종료합니다");
			break;

		}
	}
}

void TypingSystem::printMenu(){
	if (currentUser == nullptr) {
		putStringOnPosition(6, 3, "1. 로그인");

	}
	else {
		putStringOnPosition(6, 3, "1. 로그아웃");
		putStringOnPosition(6, 4, "2. 타자연습 시작");
		putStringOnPosition(6, 5, "3. 연습 통계 보기");
	}
	
	putStringOnPosition(6, 12, "메뉴를 입력해 주세요(종료는X 입력): ");
}

char TypingSystem::getChar(){
	fseek(stdin, 0, SEEK_END);
	char c;
	scanf("%c", &c);
	return c;

}

std::string TypingSystem::getString(){
	char input[100];
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);

	return input;
}

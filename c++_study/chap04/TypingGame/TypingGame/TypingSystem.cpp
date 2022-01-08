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
			
			putStringOnPosition(6, 4, "���̵� �Է����ּ���: ");
			std::string username = getString();
			currentUser = new User(username);
			// �α����� ����
			// ����ڷκ��� �Է��� �޾Ƽ� �ش� �Էµ� ���ڿ��� ����
			// ���ڿ��� ������ ���ϸ��� ������ �� ���ϸ��� �����͸� �о�ͼ�
			// ���Ÿ��, �� Ÿ�ڿ���Ƚ���� �ҷ����� ������ ����
		}
		else if (input == '1' && currentUser != nullptr) {
			// �α׾ƿ��� ����
			delete currentUser;
			currentUser = nullptr;
		}
		else if (input == '3' && currentUser != nullptr) {
			currentUser->printUserInfo();
		}
		else if (input == 'x' || input == 'X') {
			putStringOnPosition(6, 13, "���α׷��� �����մϴ�");
			break;

		}
	}
}

void TypingSystem::printMenu(){
	if (currentUser == nullptr) {
		putStringOnPosition(6, 3, "1. �α���");

	}
	else {
		putStringOnPosition(6, 3, "1. �α׾ƿ�");
		putStringOnPosition(6, 4, "2. Ÿ�ڿ��� ����");
		putStringOnPosition(6, 5, "3. ���� ��� ����");
	}
	
	putStringOnPosition(6, 12, "�޴��� �Է��� �ּ���(�����X �Է�): ");
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

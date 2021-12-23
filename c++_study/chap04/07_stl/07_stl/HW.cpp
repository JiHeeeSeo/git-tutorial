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
		printf("1. �ܾ� �Է�\n");
		printf("2. �ܾ� �˻�\n");
		printf("3. ����\n");
		printf("--------------\n");

		int menu = getInteger("��ȣ�� �Է��ϼ���: ");

		// �ܾ� �Է�
		if (menu == 1) {
			// �Է¹�����
			std::string word = getString("�ܾ �Է��ϼ���: ");
			std::string means = getString("���� �Է��ϼ���: ");

			// �ߺ����� Ȯ��
			if (member.count(word))
				printf("�ߺ��Ǿ����ϴ�.\n");
			else {
				member[word] = means;
				printf("�ܾ �ԷµǾ����ϴ�\n");
			}
			printf("\n");
		}

		// �ܾ� �˻�
		else if (menu == 2) {
			bool flag = false;
			std::string find = getString("�˻��� �ܾ �Է��ϼ���: ");
			for (auto it = member.begin(); it != member.end(); it++) {
				// �ܾ� ������ Ȯ��, ������~
				if (strcmp(it->first.c_str(), find.c_str()) == 0) {
					printf("��: %s\n", it->second.c_str());
					flag = true;
					break;
				}
			}
			if (!flag) {
				printf("ã���� �ϴ� �ܾ �����ϴ�.\n");
			}
			printf("\n");
		}
		else if (menu == 3) {
			printf("���α׷��� �����մϴ�. \n");
			break;
		}
		else
			printf("�߸��� �Է��Դϴ�.\n");
	}

	return 0;
}
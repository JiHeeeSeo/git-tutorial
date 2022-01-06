#ifndef __TYPING_SYSTEM_H__
#define __TYPING_SYSTEM_H__

#include "Header.h"

class TypingSystem {
private:
	// ������� �����
	std::vector<std::string> sentences;
public:

	// ��ũ�κ��� �����͸� �о�ͼ� ���� ����Ʈ�� �ʱ�ȭ �ϴ� �Լ�
	void loadData();

	void printData();

	void start();

	void printMenu();
};

#endif // !__TYPEING_SYSTEM_H__
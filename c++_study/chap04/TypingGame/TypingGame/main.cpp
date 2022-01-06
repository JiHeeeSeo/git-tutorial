#include "Header.h"
#include "TypingSystem.h"

int main() {
	TypingSystem* s = new TypingSystem();
	s->loadData();
	s->printData();

	char buff[100];

	sprintf(buff, "%d", 100);
	return 0;
}
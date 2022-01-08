#include "Header.h"
#include "TypingSystem.h"

int main() {
	TypingSystem* s = new TypingSystem();
	s->start();

	char buff[100];

	sprintf(buff, "%d", 100);
	return 0;
}
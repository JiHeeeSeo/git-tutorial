#include "Header.h"
#include "TypingSystem.h"

int main() {
	srand(time(0));
	TypingSystem* s = new TypingSystem();
	s->start();

	char buff[100];

	sprintf(buff, "%d", 100);
	return 0;
}
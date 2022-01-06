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

	}
}

void TypingSystem::printMenu(){
	putStringOnPosition(6, 3, "1. ·Î±×ÀÎ");
}

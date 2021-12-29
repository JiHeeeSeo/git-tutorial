#include "Header.h"

int main() {
	std::vector<Student> students;
	FILE* infile = fopen("students.txt", "r");
	while (true) {
		if (feof(infile) == 1) break;
		char name[100];
		int korean, math, english, result;
		result = fscanf(infile, "%99[^\n]s", name);
		if (result == -1) break;
		fgetc(infile);
		result = fscanf(infile, "%d %d %d", &korean, &math, &english);
		if (result == -1) break;
		fgetc(infile);
		Student s = Student(name, korean, math, english);
		students.push_back(s);
	}
	fclose(infile);

	while (true) {
		for (int i = 0; i < students.size(); i++)
			students[i].printInfo();
		std::string name = getString("학생 이름: ");
		int korean = getInteger("국어점수: ");
		int math = getInteger("수학점수: ");
		int english = getInteger("영어점수: ");

		Student s = Student(name, korean, math, english);
		students.push_back(s);

		FILE* outfile = fopen("students.txt", "w");
		for (int i = 0; i < students.size(); i++) {
			fprintf(outfile, "%s\n", students[i].name.c_str());
			fprintf(outfile, "%d %d %d\n", students[i].korean, students[i].math, students[i].english);
		}
		fclose(outfile);
	}
	
	return 0;
}

int getInteger(const char* prompt) {
	int input;
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

std::string getString(const char* prompt) {
	char line[100];
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^/\n]s", line);

	return line;
}

Student::Student(std::string name, int korean, int math, int english) {
	this->name = name;
	this->korean = korean;
	this->math = math;
	this->english = english;
}

void Student::printInfo() {
	printf("이름: %s / 국어: %d / 수학: %d / 영어: %d\n", name.c_str(), korean, math, english);
}
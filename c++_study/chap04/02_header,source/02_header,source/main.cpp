#include "main_header.h"
#include "Animal.h"
#include "Person.h"

int main() {
	
	Animal* animal = new Animal(4, "¼Ò");
	animal->printInfo();
	
	Person* person = new Person("1234-5678", "±è¸»¶Ë");
	person->printInfo();
	return 0;
}

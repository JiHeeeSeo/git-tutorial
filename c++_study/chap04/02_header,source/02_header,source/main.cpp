#include "main_header.h"
#include "Animal.h"
#include "Person.h"

int main() {
	
	Animal* animal = new Animal(4, "��");
	animal->printInfo();
	
	Person* person = new Person("1234-5678", "�踻��");
	person->printInfo();
	return 0;
}

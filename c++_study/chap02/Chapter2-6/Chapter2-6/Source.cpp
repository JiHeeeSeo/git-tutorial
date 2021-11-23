#include "Header.h"

/*struct Marine {
	int hp;
	int mp;
	char name[20];
};

Marine* foo() {
	Marine* m = (Marine*)malloc(sizeof(Marine));
	m->hp = 100;
	m->mp = 50;
	strcpy(m->name, "Jim Raynor");
	return m;
}

int main() {
	Marine* m = foo();
	printf("%s\n", m->name);
	free(m);

	return 0;
}
*/

int main() {
	int* myArray;

	int input;
	fseek(stdin, 0, SEEK_END);
	printf("숫자를 입력하시면 배열이 만들어집니다: ");
	scanf("%d", &input);

	myArray = (int*)malloc(sizeof(int) * input);

	for (int i = 0; i < input; i++)
		myArray[i] = i * 10;
	for (int i = 0; i < input; i++)
		printf("myArray[%d] = %d\n", i, myArray[i]);

}
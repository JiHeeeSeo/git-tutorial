#include <cstdio>
#include <cstdlib>

int main() {
	int* pointer = nullptr;
	
	pointer = (int*)malloc(sizeof(int));
	*pointer = 10;

	if (pointer == nullptr)
		printf("제로 value를 갖고 있습니다.");
	else {
		printf("포인터는 실제 주소를 가리키고 있습니다.\n");
		printf("%d\n", *pointer);
	}
	free(pointer);
	pointer = nullptr;
	printf("%d\n", *pointer);

	return 0;
}
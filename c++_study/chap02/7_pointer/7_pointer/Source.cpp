#include <cstdio>
#include <cstdlib>

int main() {
	int* pointer = nullptr;
	
	pointer = (int*)malloc(sizeof(int));
	*pointer = 10;

	if (pointer == nullptr)
		printf("���� value�� ���� �ֽ��ϴ�.");
	else {
		printf("�����ʹ� ���� �ּҸ� ����Ű�� �ֽ��ϴ�.\n");
		printf("%d\n", *pointer);
	}
	free(pointer);
	pointer = nullptr;
	printf("%d\n", *pointer);

	return 0;
}
#include <cstdio>
#include <iostream>

using namespace std;

void recu(int n);
void under(int n);
int glo_n = 0;

int main() {
	int n;
	cin >> n;
	glo_n = n;

	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	recu(n);
}

void recu(int n) {

	if (n == 0) {
		under(n);
		printf("\"����Լ��� ������?\"\n");
		under(n);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		under(n);
		printf("��� �亯�Ͽ���.\n");
		return;
	}

	under(n);
	printf("\"����Լ��� ������?\"\n");
	under(n);
	printf("\"�� ����.�������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	under(n);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	under(n);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�.�׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	
	recu(n - 1);
	under(n);
	printf("��� �亯�Ͽ���.\n");

}

void under(int n) {
	for (int i = 0; (glo_n - n) * 4 > i; i++) {
		printf("_");
	}
}
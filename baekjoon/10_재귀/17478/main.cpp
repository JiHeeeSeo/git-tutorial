#include <cstdio>
#include <iostream>

using namespace std;

int recu(int n);

int main() {
	int n;
	cin >> n;

	recu(n);
}

int recu(int n) {

	if (n == 0) {
		printf("\"����Լ��� ������?\"\n");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		return 0;
	}

	printf("\"����Լ��� ������?\"\n");
	printf("\"�� ����.�������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���\n.");
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�.�׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	
	return recu(n - 1);


}
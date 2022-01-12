/* � ������ �а� �迭�� ����ؼ� ���� ����� �о���̰�
�Ųٷ� ������ �ٸ� ���Ͽ� ����ϴ� ���α׷� */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// ����
	const int CAPACITY = 50;
	int numbers[CAPACITY];
	int size = 0;
	ifstream inputFile;
	ofstream outputFile;
	// �Է� ���� ����
	inputFile.open("inFile.txt");
	if (!inputFile) {
		cout << "������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ߴ��մϴ�.";
		return 0;
	}

	// �Է� ���Ͽ��� �迭�� ���ڸ� �о� ���̱�
	while (inputFile >> numbers[size] && size <= 50)
		size++;

	// �Է� ���� �ݱ�
	inputFile.close();
	// ��� ���� ����
	outputFile.open("outputFile.txt");
	if (!outputFile) {
		cout << "������ �� �� �����ϴ�. " << endl;
		cout << "���α׷��� �ߴ��մϴ�.";
		return 0;
	}

	// �迭�� ������ �Ųٷ� ��� ���Ͽ� ����
	for (int i = size - 1; i >= 0; i--)
		outputFile << numbers[i] << " ";

	// ��� ���� �ݱ�
	outputFile.close();
	cout << "�̷��͵� ��� ������?" << 6 << "�̷���" << endl;
	return 0;
}
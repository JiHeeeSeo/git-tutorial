#include <cstdio>
#include <vector>
#include <algorithm>
/*
	std::vector<T>

	std::vector<T>�� vector ������Ͽ� �ۼ��Ǿ� �ִ�. �� std::vector�� Ȱ���ϰ� �Ǹ� �������� �迭�� ����ϰ� Ȱ���� �� �ִ�.
	std::vector<T>�� �츮�� �Ϲ������� �迭�� ����ϵ� ����� �� ������ std::vector�� iterator(��ȸ��)�� ���� ������ ���Ҹ� ��ȸ�� �� �ְ�
	�� ��ȸ�ڸ��̿��� algorithm�� �ۼ��Ǿ��ִ� sort(...)�Լ��� �̿��� ���� ������ �� �ִ�.*/

/* ��ȸ��(iterator)
��ȸ�ڴ� �⺻ �ڷᱸ������ ���� �ִ� ���� Ž�� ��ü�Դϴ�. �� Ž�� ��ü�� �̿��ϸ� ���ҵ��� ���ʴ�� ������ �� �ְ� ���� �� ��ȸ�ڸ� �̿��� for������
�� ���� �ֽ��ϴ�. ��ȸ���� ���� ������ ������ �������� ���� �������� �� ó�� *(�ֽ��͸���ũ) �����ڸ� Ȱ���Ѵ�.

for(auto it = v.begin(); it !=v.end(); it++{
...
}
*/

/* auto
auto Ű����� �����Ϸ��� �߷� ������ ������ Ÿ���� �ڵ����� ������ �� �� �ִ�.
auto�� �̿��� ������ �� Ŭ�������̳� ������Ÿ���� ª�� ���� �� �־� ���� ���ȴ�.*/

int main() {
	
	/*
	std::vector<int> myvec = { 10, 20, 30 };

	myvec.push_back(100);
	myvec.push_back(200);
	myvec.push_back(300);

	myvec[2] = 55;
	*/

	std::vector<int> myvec = { 40, 1, 5,4,10,7 };

	std::sort(myvec.begin(), myvec.end());

	/*for (int i = 0; i < myvec.size(); i++) {
		printf("%d ", myvec[i]);
	}*/

	/*for (std::vector<int>::const_iterator it = myvec.begin(); it != myvec.end(); it++) {
		printf("%d ", *it);
	}*/

	for (auto it = myvec.begin(); it != myvec.end(); it++) {
		printf("%d ", *it);
	}

	return 0;
}
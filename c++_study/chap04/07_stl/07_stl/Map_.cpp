#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

/* std::map<K, V>
std::map�� map ������Ͽ� �ۼ��Ǿ� �ִ�. std::map�� �迭�� ��������� �� �� Ȯ�强�� �ִ� �迭�� Ű�� �׿� �´� �� ���� ������ �� �ִ�.
Ű�� �迭ó�� ���������� �ʾƵ� �Ǹ�, std::string �� �� integer�� �ƴϴ��� Ű���� ���� �� �ִٴ� ���� ���� ū �����̴�.

map�� ���� ���԰� ���ÿ� �ڵ����� ���� ���ĵǴ� Ư¡�� �ִ�.*/

/* std::map�� ��ȸ
std::map�� ��ȸ�� �ϱ� ���� �Ϲ����� for ������ Ȱ���� �� ����, iterator(��ȸ��)�� Ȱ���� ��ȸ�� �����ϴ�.

for(auto it=m.begin(); it!=m.end(); it++){
	it->first;  //map�� ���� Ű
	it->second; //map�� ���� ��
}*/

int main() {
	
	std::map<std::string, std::string> capitals;

	capitals["korea"] = "seoul";
	capitals["china"] = "beijing";
	capitals["usa"] = "washington";

	//capitals.erase("korea");


	//printf("%s", capitals["korea"].c_str());
	/*if (capitals.count("korea") == 1) {
		printf("korea�� �����մϴ�.");
	}
	else {
		printf("korea�� �������� �ʽ��ϴ�.");
	}*/

	for (auto it = capitals.begin(); it != capitals.end(); it++) {
		/*printf("first: %s\n", it->first.c_str());
		printf("second: %s\n", it->second.c_str());*/
		printf("capitals[%s] = %s\n", it->first.c_str(), it->second.c_str());
	}


	return 0;
}
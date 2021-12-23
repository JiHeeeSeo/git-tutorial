#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

/* std::map<K, V>
std::map은 map 헤더파일에 작성되어 있다. std::map은 배열과 비슷하지만 좀 더 확장성이 있는 배열로 키와 그에 맞는 값 쌍을 저장할 수 있다.
키는 배열처럼 연속적이지 않아도 되며, std::string 등 꼭 integer가 아니더라도 키값을 가질 수 있다는 것이 가장 큰 장점이다.

map은 원소 삽입과 동시에 자동으로 갑싱 정렬되는 특징이 있다.*/

/* std::map의 순회
std::map은 순회를 하기 위해 일반적인 for 루프를 활용할 수 없고, iterator(순회자)를 활용한 순회만 가능하다.

for(auto it=m.begin(); it!=m.end(); it++){
	it->first;  //map의 각각 키
	it->second; //map의 각각 값
}*/

int main() {
	
	std::map<std::string, std::string> capitals;

	capitals["korea"] = "seoul";
	capitals["china"] = "beijing";
	capitals["usa"] = "washington";

	//capitals.erase("korea");


	//printf("%s", capitals["korea"].c_str());
	/*if (capitals.count("korea") == 1) {
		printf("korea가 존재합니다.");
	}
	else {
		printf("korea가 존재하지 않습니다.");
	}*/

	for (auto it = capitals.begin(); it != capitals.end(); it++) {
		/*printf("first: %s\n", it->first.c_str());
		printf("second: %s\n", it->second.c_str());*/
		printf("capitals[%s] = %s\n", it->first.c_str(), it->second.c_str());
	}


	return 0;
}
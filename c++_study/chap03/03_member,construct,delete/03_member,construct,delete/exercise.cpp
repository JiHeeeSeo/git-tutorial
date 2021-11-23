#include "Header.h"

int main() {

	Employee* employee[100];
	int count = 0;

	//1. 사원 보기
	//2. 사원 추가
	//3. 사원 삭제
	//4. 프로그램 종료

	while (true) {
		printf("명령을 입력하세요\n");
		printf("1. 사원 보기\n");
		printf("2. 사원 추가\n");
		printf("3. 사원 삭제\n");
		printf("4. 프로그램 종료\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			for (int i = 0; i < count; i++)
				employee[i]->printInfo();
		}
		else if (input == 2) {
			char* name = getString("사원명 입력해 주세요: ");
			int gender = getInt("성별을 입력해 주세요(1남성, 2여성): ");
			char* rank = getString("직급을 입력해주세요: ");

			Employee* e = new Employee(name, gender, rank);
			delete[] name;
			delete[] rank;

			employee[count] = e;
			count++;

		}
		else if (input == 3) {
			int number = getInt("사원번호를 입력해 주세요: ");
			int deletedIndex = -1;

			// 전체 배열을 확인하고 같다면 그 번호를 삭제하는 것.
			for (int i = 0; i < count; i ++ ) {
				if (number == employee[i]->no) {
					delete employee[i];
					deletedIndex = i;
					//for loop 탈출
					break;
				}
			}
			if(deletedIndex >= 0){	//삭제 성공 여부 (-1이 아니면 실행)
				for (int i = deletedIndex; i < count-1; i++) {
					// 오른쪽에 있는걸 왼쪽으로 하나씩 옮김
					employee[i] = employee[i + 1];
				}
			}
			count--;
		}
		else if (input == 4) {
			// 프로그램 종료
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("올바르지 않은 입력입니다.\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) {
	// 동적할당,포인터랑 같이 사용하셈여
	char* input= new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);
	return input;
}
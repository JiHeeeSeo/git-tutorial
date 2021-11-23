#include "Header.h"



int main() {
	int i_e = 0 , s_n = 0, t_f= 0, j_p = 0;
	bool t = true, f = false;
	char mbti[5];

	printf("\n나는 처음보는 사람에게 자신을 소개하는 것이 두렵지 않다.");
	i_e += check_num(t);
	//printf("i_e = %d\n", i_e);
	printf("\n내가 스트레스를 푸는 방법은 사람들을 만나는 것이다.");
	i_e += check_num(t);
	//printf("i_e = %d\n", i_e);
	printf("\n대화를 시작하기 보다 맞장구 치는걸 좋아한다.");
	i_e += check_num(f);
	//printf("i_e = %d\n", i_e);
	printf("\n술자리에서 노는것 보다 집에서 게임하는게 좋다.");
	i_e += check_num(f);
	//printf("i_e = %d\n", i_e);

	printf("\n업무를 하거나 과제를 할 때 계획을 먼저 세운다.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);
	printf("\n가끔 번뜩이는 아이디어가 생각나 메모를 하곤 한다.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);
	printf("\n가끔 비현실적인 망상을 하는 편이다.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);
	printf("\n나는 내성적인 성격이다.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);

	printf("\n상대방의 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편이다.");
	t_f += check_num(t);
	//printf("t_f = %d\n", t_f);
	printf("\n어떤 이유에서건 상대방의 기분을 먼저 생각해야 한다.");
	t_f += check_num(t);
	//printf("t_f = %d\n", t_f);
	printf("\n다른 사람들이 나를 어떻게 생각하는지 지나치게 생각한다.");
	t_f += check_num(t);
	//printf("t_f = %d\n", t_f);
	printf("\n영화나 드라마가 뮤지컬이나 예술작품보다 더 많은 영감을 준다.");
	t_f += check_num(f);
	//printf("t_f = %d\n", t_f);

	printf("\n방 정리가 되어있지 않으면 일을 시작할 수 없다.");
	j_p += check_num(f);
	//printf("j_p = %d\n", j_p);
	printf("\n과제나 업무는 최대한 미루었다가 한꺼번에 하는 편이다.	");
	j_p += check_num(t);
	//printf("j_p = %d\n", j_p);
	printf("\n호기심은 나를 움직이는 원동력이다.");
	j_p += check_num(t);
	//printf("j_p = %d\n", j_p);
	printf("\n프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다.");
	j_p += check_num(t);
	//printf("j_p = %d\n", j_p);


	// mbti 결정
	if (i_e >= 0)
		mbti[0] = 'E';
	else
		mbti[0] = 'I';

	if (s_n >= 0)
		mbti[1] = 'N';
	else
		mbti[1] = 'S';

	if (t_f >= 0)
		mbti[2] = 'F';
	else
		mbti[2] = 'T';

	if (j_p >= 0)
		mbti[3] = 'P';
	else
		mbti[3] = 'J';
	mbti[4] = '\0';
	printf("당신의 mbti의 결과는 %s입니다.\n", mbti);
	
	
	printf("\n");
	// 결과 출력
	if (strncmp(mbti, "ISTJ", 4) == 0) {
		printf("당신은 논리주의자 입니다. 사실에 대하여 정확하고 체계적으로 기억하며 신중하고 책임감이 있습니다.\n");
		printf("인물: 퓨디파이\n");
	}
	else if (strncmp(mbti, "ISFJ", 4) == 0)
		printf("당신은 조용하고 차분하며 친근합니다. 가장 믿음직스러운 사람입니다.\n인물: 태연(가수)\n");
	else if (strncmp(mbti, "INFJ", 4) == 0)
		printf("당신은 인내심이 많고 사람들을 좋아합니다. 눈치가 빠르고 영감이 있습니다.\n인물: J.K 롤링(해리포터 작가)\n");
	else if (strncmp(mbti, "INTJ", 4) == 0)
		printf("당신은 논리적이고 효율성을 중시하는 냉철한 사람입니다.\n인물: 진용진(유튜버)\n");
	else if (strncmp(mbti, "ISTP", 4) == 0)
		printf("조용하고 과묵하고 손재주가 있는 공학자 스타일입니다.\n인물: 박명수(연예인)\n");
	else if (strncmp(mbti, "ISFP", 4) == 0)
		printf("다정하고 착하고 상대방에 대한 배려심이 많습니다. 주위 사람들에게 많이 휩쓸리는 성격입니다.\n인물: 정국(가수, BTS)\n");
	else if (strncmp(mbti, "INFP", 4) == 0)
		printf("당신은 열정적이고 완벽을 추구하며 유토피아를 추구하는 성격입니다.\n인물: 셰익스피어(작가)\n");
	else if (strncmp(mbti, "INTP", 4) == 0)
		printf("당신은 조용하고 과묵하며 상상을 즐기는 사색가 입니다. 사회성이 부족하다는 말을 많이 듣습니다.\n인물: 아인슈타인(과학자)\n");
	else if (strncmp(mbti, "ESTP", 4) == 0)
		printf("당신은 활동하는 것을 좋아하는 사업가형 입니다.\n인물: 존 F 케네디(미국의 전 대통령)\n");
	else if (strncmp(mbti, "ESFP", 4) == 0)
		printf("당신은 자유로운 영혼을 갖고 있는 연예인 스타일입니다.\n인물: 비(가수)\n");
	else if (strncmp(mbti, "ENFP", 4) == 0)
		printf("당신은 넘치는 상상력을 바탕으로 항상 새로운 가능성을 찾아보는 탐험가입니다.\n인물: 대도서관(유튜버, 방송인)\n");
	else if (strncmp(mbti, "ENTP", 4) == 0)
		printf("당신은 논쟁을 즐기며 사람 만나는 것을 좋아합니다.\n인물: 서새봄(스트리머)\n");
	else if (strncmp(mbti, "ESTJ", 4) == 0)
		printf("현실적, 구체적, 사실적이며 조직을 이끌어나가는 리더형 입니다.\n인물: 허경영(정치인)\n");
	else if (strncmp(mbti, "ESFJ", 4) == 0)
		printf("동정심이 많고 다른 사람에게 관심을 주는 것을 좋아하며 협력을 조항하고 동료애가 끈끈합니다.\n인물: 김남주(가수)\n");
	else if (strncmp(mbti, "ENFJ", 4) == 0)
		printf("당신은 따뜻하고 적극적이며 사교성이 풍부하고 이타적입니다.\n인물: 신세경(연예인)\n");
	else if (strncmp(mbti, "ENTJ", 4) == 0)
		printf("당신은 열정적이며 솔직하고 지도력과 통솔력이 있습니다. 활동적이고 장기적인 계획을 좋아합니다.\n인물: 고든 램지(요리인, 방송인)\n");

	printf("\n\n");

	return 0;
}

int check_num(bool strong) {
	int select, r;
	bool flag = true;
		
	while(flag){
		printf("\n1: 강한 부정, 2: 약한 부정, 3: 약한 긍정, 4:강한 긍정\n입력: ");
		scanf("%d", &select);
		if (strong){
			switch (select) {
			case 1:
				r = -3;
				flag = false;
				break;
			case 2:
				r = -1;
				flag = false;
				break;
			case 3:
				r = 1;
				flag = false;
				break;
			case 4:
				r = 3;
				flag = false;
				break;
			default:
				printf("잘못된 숫자를 입력하셨습니다.");
			}
		}
		else {
			switch (select) {
			case 1:
				r = 3;
				flag = false;
				break;
			case 2:
				r = 1;
				flag = false;
				break;
			case 3:
				r = -1;
				flag = false;
				break;
			case 4:
				r = -3;
				flag = false;
				break;
			default:
				printf("잘못된 숫자를 입력하셨습니다.");
			}
		}
	}

	return r;
}


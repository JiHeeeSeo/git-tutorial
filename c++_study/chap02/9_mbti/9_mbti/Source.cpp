#include "Header.h"



int main() {
	int i_e = 0 , s_n = 0, t_f= 0, j_p = 0;
	bool t = true, f = false;
	char mbti[5];

	printf("\n���� ó������ ������� �ڽ��� �Ұ��ϴ� ���� �η��� �ʴ�.");
	i_e += check_num(t);
	//printf("i_e = %d\n", i_e);
	printf("\n���� ��Ʈ������ Ǫ�� ����� ������� ������ ���̴�.");
	i_e += check_num(t);
	//printf("i_e = %d\n", i_e);
	printf("\n��ȭ�� �����ϱ� ���� ���屸 ġ�°� �����Ѵ�.");
	i_e += check_num(f);
	//printf("i_e = %d\n", i_e);
	printf("\n���ڸ����� ��°� ���� ������ �����ϴ°� ����.");
	i_e += check_num(f);
	//printf("i_e = %d\n", i_e);

	printf("\n������ �ϰų� ������ �� �� ��ȹ�� ���� �����.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);
	printf("\n���� �����̴� ���̵� ������ �޸� �ϰ� �Ѵ�.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);
	printf("\n���� ���������� ������ �ϴ� ���̴�.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);
	printf("\n���� �������� �����̴�.");
	s_n += check_num(t);
	//printf("s_n = %d\n", s_n);

	printf("\n������ ����� ����� �� ������ ã�⺸�� ������ ���ִ� ���̴�.");
	t_f += check_num(t);
	//printf("t_f = %d\n", t_f);
	printf("\n� ���������� ������ ����� ���� �����ؾ� �Ѵ�.");
	t_f += check_num(t);
	//printf("t_f = %d\n", t_f);
	printf("\n�ٸ� ������� ���� ��� �����ϴ��� ����ġ�� �����Ѵ�.");
	t_f += check_num(t);
	//printf("t_f = %d\n", t_f);
	printf("\n��ȭ�� ��󸶰� �������̳� ������ǰ���� �� ���� ������ �ش�.");
	t_f += check_num(f);
	//printf("t_f = %d\n", t_f);

	printf("\n�� ������ �Ǿ����� ������ ���� ������ �� ����.");
	j_p += check_num(f);
	//printf("j_p = %d\n", j_p);
	printf("\n������ ������ �ִ��� �̷���ٰ� �Ѳ����� �ϴ� ���̴�.	");
	j_p += check_num(t);
	//printf("j_p = %d\n", j_p);
	printf("\nȣ����� ���� �����̴� �������̴�.");
	j_p += check_num(t);
	//printf("j_p = %d\n", j_p);
	printf("\n���������� ȸ������� �� ���� ���� ��� �ִٰ� �����Ѵ�.");
	j_p += check_num(t);
	//printf("j_p = %d\n", j_p);


	// mbti ����
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
	printf("����� mbti�� ����� %s�Դϴ�.\n", mbti);
	
	
	printf("\n");
	// ��� ���
	if (strncmp(mbti, "ISTJ", 4) == 0) {
		printf("����� �������� �Դϴ�. ��ǿ� ���Ͽ� ��Ȯ�ϰ� ü�������� ����ϸ� �����ϰ� å�Ӱ��� �ֽ��ϴ�.\n");
		printf("�ι�: ǻ������\n");
	}
	else if (strncmp(mbti, "ISFJ", 4) == 0)
		printf("����� �����ϰ� �����ϸ� ģ���մϴ�. ���� ������������ ����Դϴ�.\n�ι�: �¿�(����)\n");
	else if (strncmp(mbti, "INFJ", 4) == 0)
		printf("����� �γ����� ���� ������� �����մϴ�. ��ġ�� ������ ������ �ֽ��ϴ�.\n�ι�: J.K �Ѹ�(�ظ����� �۰�)\n");
	else if (strncmp(mbti, "INTJ", 4) == 0)
		printf("����� �����̰� ȿ������ �߽��ϴ� ��ö�� ����Դϴ�.\n�ι�: ������(��Ʃ��)\n");
	else if (strncmp(mbti, "ISTP", 4) == 0)
		printf("�����ϰ� �����ϰ� �����ְ� �ִ� ������ ��Ÿ���Դϴ�.\n�ι�: �ڸ��(������)\n");
	else if (strncmp(mbti, "ISFP", 4) == 0)
		printf("�����ϰ� ���ϰ� ���濡 ���� ������� �����ϴ�. ���� ����鿡�� ���� �۾����� �����Դϴ�.\n�ι�: ����(����, BTS)\n");
	else if (strncmp(mbti, "INFP", 4) == 0)
		printf("����� �������̰� �Ϻ��� �߱��ϸ� �����ǾƸ� �߱��ϴ� �����Դϴ�.\n�ι�: ���ͽ��Ǿ�(�۰�)\n");
	else if (strncmp(mbti, "INTP", 4) == 0)
		printf("����� �����ϰ� �����ϸ� ����� ���� ����� �Դϴ�. ��ȸ���� �����ϴٴ� ���� ���� ����ϴ�.\n�ι�: ���ν�Ÿ��(������)\n");
	else if (strncmp(mbti, "ESTP", 4) == 0)
		printf("����� Ȱ���ϴ� ���� �����ϴ� ������� �Դϴ�.\n�ι�: �� F �ɳ׵�(�̱��� �� �����)\n");
	else if (strncmp(mbti, "ESFP", 4) == 0)
		printf("����� �����ο� ��ȥ�� ���� �ִ� ������ ��Ÿ���Դϴ�.\n�ι�: ��(����)\n");
	else if (strncmp(mbti, "ENFP", 4) == 0)
		printf("����� ��ġ�� ������ �������� �׻� ���ο� ���ɼ��� ã�ƺ��� Ž�谡�Դϴ�.\n�ι�: �뵵����(��Ʃ��, �����)\n");
	else if (strncmp(mbti, "ENTP", 4) == 0)
		printf("����� ������ ���� ��� ������ ���� �����մϴ�.\n�ι�: ������(��Ʈ����)\n");
	else if (strncmp(mbti, "ESTJ", 4) == 0)
		printf("������, ��ü��, ������̸� ������ �̲������ ������ �Դϴ�.\n�ι�: ��濵(��ġ��)\n");
	else if (strncmp(mbti, "ESFJ", 4) == 0)
		printf("�������� ���� �ٸ� ������� ������ �ִ� ���� �����ϸ� ������ �����ϰ� ����ְ� �����մϴ�.\n�ι�: �賲��(����)\n");
	else if (strncmp(mbti, "ENFJ", 4) == 0)
		printf("����� �����ϰ� �������̸� �米���� ǳ���ϰ� ��Ÿ���Դϴ�.\n�ι�: �ż���(������)\n");
	else if (strncmp(mbti, "ENTJ", 4) == 0)
		printf("����� �������̸� �����ϰ� �����°� ��ַ��� �ֽ��ϴ�. Ȱ�����̰� ������� ��ȹ�� �����մϴ�.\n�ι�: ��� ����(�丮��, �����)\n");

	printf("\n\n");

	return 0;
}

int check_num(bool strong) {
	int select, r;
	bool flag = true;
		
	while(flag){
		printf("\n1: ���� ����, 2: ���� ����, 3: ���� ����, 4:���� ����\n�Է�: ");
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
				printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.");
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
				printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.");
			}
		}
	}

	return r;
}


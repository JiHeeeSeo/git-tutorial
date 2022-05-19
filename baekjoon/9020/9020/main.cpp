#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int isPrime[10000 + 1] = {};

int nextPrime(int n);

int main() {

    // 0���� �ʱ�ȭ
    int max = 10000;

    for (int i = 2; i <= max; i++) {
        if (i == 1)
            continue;
        // 2�ų� 3�̸� count ����
        if (i == 2 || i == 3) {
            isPrime[i] = 1;
            continue;
        }
        int cn = (int)sqrt(i);
        int check = 0;
        for (int k = cn; k > 1; k--) {
            if (i % k == 0) {
                check++;
                break;
            }
        }

        if (check == 0) {
            isPrime[i] = 1;
        }
    }

    int num, input;
    //cin >> num;

    for (int input = 4; input < 100; input=input+2) {
        //cin >> input;

        // ���� ������ ����
        int index = input / 2;

        // �Է� - �� ���� ���� �Ҽ��� �ƴ϶��
        while (!isPrime[input - index]) {
            // �� ���� ������ ū �Ҽ��� ã�� ������ ����
            index = nextPrime(index);
        }

        printf("%d %d\n", input - index, index);
    }

    return 0;
}

int nextPrime(int n) {
    n++;
    while (!isPrime[n]) {
        n++;
    }
    return n;
}
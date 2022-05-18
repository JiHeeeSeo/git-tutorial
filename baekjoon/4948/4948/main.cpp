#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    // 0���� �ʱ�ȭ
    int max = 123456 * 2;
    int isPrime[123456 * 2+1] = {};
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

    string s;
    // ���ڿ��� ���� ������ ����
    while (getline(cin, s)) {

        int n = stoi(s);
        int count = 0;
        if (n == 0) {
            break;
        }

        for (int i = n + 1; i <= n * 2; i++) {
            if (isPrime[i]) count++;
        }

        printf("%d\n", count);
    }
    return 0;
}
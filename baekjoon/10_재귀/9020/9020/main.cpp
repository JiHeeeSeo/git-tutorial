#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int isPrime[10000 + 1] = {};

int nextPrime(int n);

int main() {

    // 0으로 초기화
    int max = 10000;

    for (int i = 2; i <= max; i++) {
        if (i == 1)
            continue;
        // 2거나 3이면 count 증가
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

        // 냅다 반으로 갈라
        int index = input / 2;

        // 입력 - 반 가른 수가 소수가 아니라면
        while (!isPrime[input - index]) {
            // 반 가른 수보다 큰 소수를 찾는 여정을 떠남
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
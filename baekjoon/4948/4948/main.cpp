#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    // 0으로 초기화
    int max = 123456 * 2;
    int isPrime[123456 * 2+1] = {};
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

    string s;
    // 문자열이 들어올 때마다 실행
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
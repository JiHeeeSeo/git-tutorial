#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    string s;
    // 문자열이 들어올 때마다 실행
    while(getline(cin, s)){

        int n = stoi(s);
        int count = 0;
        if (n==0){
            break;
        }

        for (int i = n; i <= n*2; i++) {
            if (i == 1)
                continue;
            // 2거나 3이면 count 증가
            if (i == 2||i==3) {
                count++;
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
                count ++;
            }
        printf("%d\n", count);
        }

    }

}
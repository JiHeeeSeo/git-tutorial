#시간초과 없는 버전,, 알고 보니 소수를 구하는데 시간이 너무 오래 걸린거였음
n = int(input())

while n != 1:
    for x in range(2, n+1):
        if n%x == 0:
            print(x)
            n = int(n/x)
            break
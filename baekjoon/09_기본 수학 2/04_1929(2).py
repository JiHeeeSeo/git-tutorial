import sys
m, n = map(int, sys.stdin.readline().split())

for x in range(m, n+1):
    count = 0

    for i in range(1, x+1):
        if x%i == 0:
            count += 1
        if count >= 3:
            break
    if count == 2:
        print(x)

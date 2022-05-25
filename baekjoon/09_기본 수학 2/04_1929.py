m, n = map(int, input().split())

#시간초과
if n != 1:

    #prime = []
    result = []
    for x in range(m, n+1):
        count = 0

        for i in range(1, x+1):
            if x%i == 0:
                count += 1
            if count >= 3:
                break
        if count == 2:
            print(x)
else:
    count =1
m = int(input())
n = int(input())

result = []
for x in range(m,n+1):
    count = 0

    for i in range(1, x+1):
        if x%i == 0:
            count += 1
        if count >= 3:
            break
    if count == 2:
        result.append(x)

if len(result) == 0:
    print(-1)
else:
    print(sum(result))
    print(result[0])
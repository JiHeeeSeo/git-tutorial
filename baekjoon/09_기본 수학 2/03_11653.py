n = int(input())

#시간초과
if n != 1:

    prime = []
    result = []
    for x in range(1, n+1):
        count = 0

        for i in range(1, x+1):
            if x%i == 0:
                count += 1
            if count >= 3:
                break
        if count == 2:
            prime.append(x)

    #print(prime)

    if n in prime:
        print(n)
    else:
        index = 0
        while True:
            x = prime[index]
            if n%x == 0:
                n = n/x
                result.append(x)
            elif n==1:
                break
            else:
                index+=1


        for x in result:
            print(x)


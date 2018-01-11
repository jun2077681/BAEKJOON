def hashing(a, b, x):
	return (a*x+b)%m

T = int(input())

for t in range(T):
    a,b,x,n,c,d,m = list(map(int, input().split(' ')))

    count = 0

    for i in range(n+1):
        tmp = hashing(a,b,x+i)
        if tmp >= c and tmp <= d:
            count = count+1

    print (count)

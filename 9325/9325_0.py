T = int(input())
for i in range(T):
    s = int(input())
    n = int(input())
    sum = s
    for i in range(n):
        [q,p] = map(lambda x:int(x), input().split(' '))
        sum = sum+q*p
    print(sum)

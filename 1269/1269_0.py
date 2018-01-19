(a_n,b_n) = map(lambda x:int(x), input().split(' '))

A = set(input().split(' '))
B = set(input().split(' '))

D = (A-B) | (B-A)
print(len(D))

def gcd(a, b):
  while (b != 0):
    temp = a % b
    a = b
    b = temp
  return abs(a)

T = int(input())

for i in range(T):
    (a,b) = map(lambda x:int(x), input().split(' '))
    g = gcd(a,b)
    A = a//g
    B = b//g
    print(A*B*g,g)

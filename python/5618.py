import math

def gcd(a, b):
  while (b != 0):
    temp = a % b
    a = b
    b = temp
  return abs(a)

n = input()
inp = list(map(lambda x:int(x), input().split(' ')))

g = inp[0]
for i in inp:
    g = gcd(g, i)

for i in range(1,g+1):
    if g%i is 0:
        print(i)

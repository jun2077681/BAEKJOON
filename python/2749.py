p = [None]*300000000
p[0] = 0
p[1] = 1
p[2] = 1

for i in range(3, len(p)):
    p[i] = (p[i-1] + p[i-2])%1000000


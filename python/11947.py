def heartful(a):
    n = len(str(a))

    return (10**n - 1 - a)*a


T = int(input())
N = []

while(T is not 0):
    T = T-1
    N.append(int(input()))

max_case = max(N)

mp = [None]*(max_case+1)

mp[0] = 0
mp[1] = heartful(1)

for i in range(2,max_case+1):
    mp[i] = max(mp[i-1], heartful(i))

for i in N:
    print(mp[i])

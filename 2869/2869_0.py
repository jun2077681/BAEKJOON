a=input().split(' ')

A,B,V = int(a[0]), int(a[1]), int(a[2])
k = (V-A)//(A-B)

if (V-A)%(A-B) == 0:
    print(k+1)
else:
    print(k+2)

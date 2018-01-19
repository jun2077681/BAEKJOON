t=int(input())
while t!=0:
    t-=1
    a=input()
    a=a.split(' ')
    a[1]=a[1][:int(a[0])-1]+a[1][int(a[0]):]
    print (a[1])

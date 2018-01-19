def VPS(a):
    k=0
    if a[0]==')':
        return False
    for i in a:
        if i=='(':
            k+=1
        elif i==')':
            k-=1
            if k<0:
                return False
    if k==0:
        return True
    else:
        return False
        
a=int(input())
while a!=0:
    a-=1
    k=input()
    if VPS(k):
        print("YES")
    else:
        print("NO")


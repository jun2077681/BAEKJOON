def addlist(a):
    a=list(str(a))
    if(len(a)) is 1:
        return True
    d=int(a[1])-int(a[0])
    for i in range(1,len(a)):
        if int(a[i])-int(a[i-1]) != d:
            return False
    return True

a = input()
count=0
for i in range(1,int(a)+1):
    if addlist(i) is True:
        count+=1

print (count)

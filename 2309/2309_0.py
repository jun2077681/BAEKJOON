long=[]
n=9
while n!=0:
    long.append(int(input()))
    n-=1
sum=0
for i in long:
    sum+=i
for i in long:
    for j in long:
        if i==j:
            continue
        elif i+j==sum-100:
            long.remove(i)
            long.remove(j)
            long.sort()
            for i in long:
                print (i)
            exit()

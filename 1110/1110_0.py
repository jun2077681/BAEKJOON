def cyclenum(a):
    k=a//10+a%10
    return (a%10)*10+k%10

k=int(input())
count=1
i=cyclenum(k)
while i!=k:
    i=cyclenum(i)
    count+=1

print (count)


def selfnumber(a):
    value=a
    while a!=0:
        value+=a%10
        a=a//10
    return value

self=[True]*10001
for i in range(1,10000):
    try:
        self[selfnumber(i)]=False
    except:
        continue
for i in range(1,10000):
    if self[i]==True:
        print (i)


a=1000-int(input())
answer=0
while a!=0:
    while a>=500:
        a-=500
        answer+=1
    while a>=100:
        a-=100
        answer+=1
    while a>=50:
        a-=50
        answer+=1
    while a>=10:
        a-=10
        answer+=1
    while a>=5:
        a-=5
        answer+=1
    while a>=1:
        a-=1
        answer+=1
print (answer)


a=int(input())*int(input())*int(input())
list=[0,0,0,0,0,0,0,0,0,0]
while a!=0:
    list[a%10]+=1
    a=a//10

for i in list:
    print (i)

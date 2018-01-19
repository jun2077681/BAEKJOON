a=int(raw_input())

list=[0,1,1]
for i in range(a-2):
    list[i%3]=list[(i+1)%3]+list[(i+2)%3]

print list[a%3]

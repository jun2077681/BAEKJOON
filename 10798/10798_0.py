a=[]

for i in range(5):
    a.append(input())
    
k=0
for i in range(5):
    if k<len(a[i]):
        k=len(a[i])
        
for i in range(k):
    for j in range(5):
        try:
            print(a[j][i],end='')
        except:
            None


(a,b) = input().split(' ')
l = len(a.split('.')[1])

try:
    (n,m,b) = map(lambda x: int(x), a.split('.')+[b])
except:
    (n,m,b)= map(lambda x:int(x), [a,'0',b])

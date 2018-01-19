n = int(input())
f = int(input())

k = (n//100)*100
x = k//f
if k%f is not 0:
    x = x+1
    
print(str(x*f)[-2:])

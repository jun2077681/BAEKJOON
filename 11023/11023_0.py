num = input().split(' ')
sum = 0
for i in num:
    try:
        sum = sum+int(i)
    except:
        continue
print(sum)

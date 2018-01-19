a = int(input())
s1 = input()
s2 = input()

for i in range(a):
    s1 = s1.replace('1','k').replace('0','1').replace('k','0')

if s1==s2:
    print("Deletion succeeded")
else:
    print("Deletion failed")

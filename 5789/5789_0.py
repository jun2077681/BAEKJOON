a = int(input())

for i in range(a):
    s = input()
    index = len(s)//2
    if(s[index-1] == s[index]):
        print('Do-it')
    else:
        print('Do-it-Not')

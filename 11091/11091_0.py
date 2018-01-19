a = int(input())

for i in range(a):
    s = input().lower()
    x = ''
    for i in range(97,97+26):
        if(s.find(chr(i)) == -1):
            x = x+chr(i)

    if(x is ''):
        print('pangram')
    else:
        print('missing '+x)

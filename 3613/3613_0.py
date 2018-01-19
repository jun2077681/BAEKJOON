def to_cpp(a):
    s = a
    for i in a:
        if(i.isupper() is True):
            s = s.replace(i,'_'+i.lower())
    return s

def toJava(a):
    s = a
    while True:
        index = s.find('_')
        if index is -1:
            break
        s = s[:index] + s[index+1].upper() + s[index+2:]
    return s

a = input()

if(a[0] == '_' or a[len(a)-1] == '_' or a.find('__') is not -1):
    print("Error!")
    exit(0)

if(a.find('_') == -1):
    if(a[0].islower() is True):
        print(to_cpp(a))
    else:
        print("Error!")
else:
    if(a.lower()==a):
        print(toJava(a))
    else:
        print("Error!")


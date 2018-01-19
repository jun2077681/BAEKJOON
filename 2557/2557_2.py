f=open("text.txt",'w')
data="Hello World!"
f.write(data)
f.close()

f=open("text.txt",'r')
line=f.readline()
print(line)
f.close()

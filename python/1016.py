from math import *

def isfloat(a):
    return a==int(a)

min, max = map(lambda x:int(x), input().split(' '))


print((max-min) - (floor(sqrt(max))-ceil(sqrt(min))))

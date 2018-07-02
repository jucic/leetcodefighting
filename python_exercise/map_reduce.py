from functools import reduce
DIGITS={'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}
def str2int(s):
    def fn(x,y):
        return 10*x+y
    def char2num(a):
        return DIGITS[a]
    return reduce(fn,map(char2num,s))
print(str2int("23489"))

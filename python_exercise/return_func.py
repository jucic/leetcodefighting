def createCounter():
    i=0
    def counter():
        nonlocal i
        i=i+1
        return i
    return counter
counterA = createCounter()
print(counterA(), counterA(), counterA(), counterA(), counterA()) # 1 2 3 4 5
counterB = createCounter()
#print(counterB(), counterB(), counterB(), counterB())
if [counterB(), counterB(), counterB(), counterB()] == [1, 2, 3, 4]:
    print('测试通过!')
else:
    print('测试失败!')


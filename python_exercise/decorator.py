import time,functools
def metric(func):
    @functools.wraps(func)#防止slow和fast函数的__name__变成wrapper!!!
    def wrapper(*args,**kw):
        start_time=time.time()
        func(*args,**kw)
        end_time=time.time()
        print('%s executed in %s ms'%(func.__name__,1000*(end_time-start_time)))
        return func(*args,**kw)
    return wrapper
@metric
def fast(x,y):
    time.sleep(0.0012)
    return x+y

@metric
def slow(x,y,z):
    time.sleep(0.1234)
    return x*y*z

f=fast(11,22)
s=slow(11,22,33)
if f!=33:
    print('fail')
elif s!=7986:
    print('fail')
print(slow.__name__)

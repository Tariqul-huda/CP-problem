t = int(input())

while t:
    n = int(input())
    a = list(map(int,input().split()))
    m = int(input())
    b  = list(map(int,input().split())) 
    cnt = sum(b)
    cnt = cnt%n
    if n==0:
        print(a)
    else:
        slc = a[0:cnt]
        del a[0:cnt]
        a = a +slc
        print(a)
    t = t-1
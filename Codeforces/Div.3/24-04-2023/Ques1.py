for _ in range(int(input())):
    n, t = (map(int,input().strip().split()))
    a = list(map(int,input().strip().split()))
    b = list(map(int,input().strip().split()))
    res = -1
    m = -1
    for i in range(n):
        if(a[i]<=(t-i) and b[i]>m):
            m = b[i]
            res = i+1

    print(res)
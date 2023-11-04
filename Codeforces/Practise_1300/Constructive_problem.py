for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    sa = set(a)
    mex = 0
    while mex in sa:
        mex += 1
    l, r = -1, -1
    for i in range(n):
        if a[i] == mex + 1:
            r = i + 1
            if l == -1:
                l = i
 
    sa1 = set(a[:l]).union(set(a[r:]))
    mex1 = 0
    while mex1 in sa1:
        mex1 += 1
    if mex1 == mex and mex != n:
        print('YES')
    else:
        print('NO')
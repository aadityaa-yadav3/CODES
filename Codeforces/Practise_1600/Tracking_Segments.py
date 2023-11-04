def minBt(n, m):
    limits = [list(map(int, input().split())) for nothing in range(m)]
    q = int(input())
    indexs = [int(input()) for nothing in range(q)]
    l = 0
    r = q-1
    while l <= r:
        mid = (l+r)//2
        diff = [0]*(n+1)
        for ones in range(mid+1):
            diff[indexs[ones]] += 1
        for i in range(1, n+1):
            diff[i] += diff[i-1]
        if (any((diff[y] - diff[x-1])*2 > y-x+1 for (x, y) in limits)):
            r = mid - 1
        else:
            l = mid + 1
    return -1 if l>=q else l+1
for _ in range(int(input())):
    # 0 0 0 0 0
    # 0 0 0 0 1
    # 0 0 1 0 1
    # 1 0 1 0 1
    # make different lists seperately, keep adding 1s, when beautiful return
    # make a list of dissbalance count, keep adding 1s in range, print min
    n, m = map(int, input().split())
    print(minBt(n,m))
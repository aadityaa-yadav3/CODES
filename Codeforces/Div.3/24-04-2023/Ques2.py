for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().strip().split()))
    a.sort()
    b1 = a[0]*a[1]
    b2 = a[n-1]*a[n-2]
    print(max(b1, b2))
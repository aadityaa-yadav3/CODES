for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    for i in range(n):
        low, high = 0, i + 1
        mid = (low + high)//2
        tmp = a[:i+1:]; tmp.sort()
        #binary search on tmp to find min index
        while (low < high):
            if b[i] >= tmp[mid]: low = mid + 1
            else: high = mid
            mid = (low + high)//2
        if (low < i and tmp[low] <= b[i]): low += 1
        for j in range(i+1):
            a[j] -= b[i] if a[j] > b[i] else a[j]
        print(b[i]*(i - low + 1) + sum(tmp[:low]), end = " ")
    print()
n, shop = int(input()), list(map(int, input().split()))
shop.sort()
for _ in range(int(input())):
    m = int(input())
    mid, low, high = n//2, 0, n-1
    while (low < high):
        if m >= shop[mid]: low = mid + 1
        else: high = mid
        mid = (low + high )//2
    if (low < n and shop[low]<=m): low+=1
    print(low)
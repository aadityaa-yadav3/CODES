n, k = map(int, input().split())
arr = list(map(int, input().split()))
count = 0
for x in arr:
    if (x >= arr[k-1] and x > 0):
        count += 1
print(count)
for _ in range(int(input())):
    arr = list(map(int, input().split()))
    count = 0
    while (min(arr) != 0):
        count += max(arr)//min(arr)
        arr[arr.index(max(arr))] = max(arr)%min(arr)
    print(count)
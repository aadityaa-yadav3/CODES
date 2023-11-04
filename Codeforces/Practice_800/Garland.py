for _ in range(int(input())):
    arr = str(input())
    if (arr.count(arr[0]) == 4): print(-1)
    elif arr.count(arr[0]) == 3 or arr.count(arr[1]) == 3 or arr.count(arr[2]) == 3 or arr.count(arr[3]) == 3: print(6)
    else: print(4)
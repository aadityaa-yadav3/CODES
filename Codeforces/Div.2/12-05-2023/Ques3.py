for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    if (len(set(arr)) == 1): print(1)
    else:
        slope, count = 0, 0
        for i in range(1,len(arr)):
            if arr[i-1]>arr[i]:
                if slope<=0:
                    count=count+1
                slope=1
            elif arr[i-1]<arr[i]:
                if slope>=0:
                    count=count+1
                slope=-1
        print(count+1)
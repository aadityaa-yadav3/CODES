for _ in range(int(input())):
    length = int(input())
    arr = list(map(int, input().split()))
    min_arr = 1
    max_arr = length
    l = 0
    r = length - 1
    while(l < r):
        if (min_arr !=arr[l] and max_arr!=arr[r] and min_arr !=arr[r] and max_arr !=arr[l]):
            break
        if (min_arr == arr[l]):
            l+=1
            min_arr+=1
        if (max_arr == arr[l]):
            l+=1
            max_arr-=1
        if (max_arr == arr[r]):
            r-=1
            max_arr-=1
        if (min_arr == arr[r]):
            r-=1
            min_arr+=1
    if (l>=r):
        print("-1")
    else:
        print(l+1, r+1)
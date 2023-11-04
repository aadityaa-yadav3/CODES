for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    if (n == 1):
        print("YES" if arr[0] == 1 else "NO")
    else:
        if (set(arr) == {0}):
            print("YES")
        else:
            for i in range(max(arr)):
                if (i not in arr):
                    if ():
                        start = arr.index(i+1)
                        end = n-arr[::-1].index(i+1)
                        arr = arr[:start:]+arr[end::]
                        temp = set(arr)
                        if (len(temp)==0):
                            print("YES" if i == 0 else "NO")
                        else:
                            print("YES" if temp & set(range(i)) == temp else "NO")
                        break
                    elif(arr.count(i+1) == 1):
                        print("YES" if i == 0 else "NO")
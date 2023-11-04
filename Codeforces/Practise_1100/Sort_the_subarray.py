for _ in range(int(input())):
    num = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    l = 0
    r = 1
    ans = []
    # for i in range(len(arr2) - 1):
    #     print(l, r)
    #     if (arr2[l] > arr2[l+1]):
    #         l += 1
    #         r = l
    #     else:
    #         while(r < len(arr2) and arr2[r-1] <= arr2[r]):
    #             r += 1
    #         ans.append([l,r])
    # print(ans)
    while(l < len(arr2)-1):
        if(arr2[l] > arr2[l+1]):
            l += 1
            r = l
        else:
            while(r < len(arr2) and arr2[r-1] <= arr2[r]):
                r += 1
            l = r
            ans.append([l,r])
    print(ans)

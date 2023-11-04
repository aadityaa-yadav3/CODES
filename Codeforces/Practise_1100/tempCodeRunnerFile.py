e (arr2[l] > arr2[l+1]):
        l += 1
        r = l
    while(r < len(arr2) and arr2[r-1] <= arr2[r]):
        r += 1
    ans.
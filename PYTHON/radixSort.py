def countSort(arr, n = 0):
    size = len(arr)
    ans = [0]*size
    count = [0]*10
    for i in range(size):
        count[int((arr[i])//(10**n))%10]+=1
    for i in range(1,len(count)):
        count[i] += count[i-1]
    for i in range(size)[::-1]:
        ans[count[int((arr[i])//(10**n))%10]-1] = (arr[i])
        count[int((arr[i])//(10**n))%10]-=1
    n += 1
    return ans, n

def radixSort(arr):
    m = max(arr)
    exp = 1
    n = 0
    while(m//exp):
        arr, n = countSort(arr, n)
        exp *= 10
    return arr

arr = list(map(int, input().split()))
arr = radixSort(arr)
print(arr)
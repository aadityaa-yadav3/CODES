def combine(arr, k):
    if (len(arr) == k):
        print (arr)
        return

    for i in range(len(arr)):
        num = arr.pop(i)
        (combine(arr, k))
        arr.insert(i,num)


n, k = map(int, input().split())
combine(list(range(1, n+1)), k)
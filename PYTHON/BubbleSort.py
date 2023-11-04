arr = ['7','2','6','5','3']
n = 5
for i in range(1, n):
    for j in range(1, n-i+1):
        if arr[j] < arr[j-1]:
            tmp = arr[j-1]
            arr[j-1] = arr[j]
            arr[j] = tmp
print(arr)
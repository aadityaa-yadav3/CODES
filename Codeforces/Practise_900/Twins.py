n, arr = int(input()), list(map(int, input().split())); arr.sort()
total_sum = sum(arr)
for i in range(n):
    if sum(arr[n-i-1::]) > total_sum - sum(arr[n-i-1::]):print(i+1);break
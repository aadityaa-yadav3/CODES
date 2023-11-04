n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split())) 
arr3 = arr1[1::] + arr2[1::]
for num in range(1,n+1):
    if num not in arr3: print("Oh, my keyboard!"); break
else: print("I become the guy.")
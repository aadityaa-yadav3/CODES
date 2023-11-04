for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = []
    for i in range(n):
        arr.append(input())
    print(arr.count(str(arr[0])))
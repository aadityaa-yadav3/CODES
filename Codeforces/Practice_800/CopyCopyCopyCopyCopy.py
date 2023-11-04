for _ in range(int(input())):
    n, arr = int(input()), list(map(int, input().split()))
    print(len(set(arr)))
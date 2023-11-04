for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    d = {x: arr.count(x) for x in arr}
    for key, value in d.items():
        if (value == min(d.values())):
            print(arr.index(key)+1)
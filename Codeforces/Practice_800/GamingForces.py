for _ in range(int(input())):
    n, arr = int(input()), list(map(int, input().split()))
    d, count= {x : arr.count(x) for x in arr}, 0
    for key, values in d.items():
        if key > 1: count += values
        else: count += values//2 + values%2
    print(count)
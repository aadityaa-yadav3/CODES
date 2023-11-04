for _ in range(int(input())):
    n, arr = int(input()), list(map(int, input().split()))
    count, mbarns, barns = 0, 0, 0
    for i in range(n):
        if arr[i] == 1:
            barns += 1; count += 1
            mbarns = barns if barns > mbarns else mbarns
        elif arr[i] == 2:
            barns = (count // 2) + 1 if count else 0
            mbarns = barns if barns > mbarns else mbarns
    print(mbarns)
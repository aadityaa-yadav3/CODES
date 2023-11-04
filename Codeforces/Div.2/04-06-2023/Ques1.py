for _ in range(int(input())):
    num = int(input())
    val = list(map(int, input().split()))
    if min(val)<0:
        print(min(val))
    else:
        print(max(val))
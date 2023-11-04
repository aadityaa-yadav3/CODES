for _ in range(int(input())):
    n, k = map(int, input().split())
    p = list(map(int, input().split()))
    flag = 0
    for i in range(k):
        for j in range(i,n,k):
            if((p[j] - 1) % k != i):
                flag += 1
    if (flag == 0):
        print(0)
    elif(flag == 2):
        print(1)
    else:
        print(-1)
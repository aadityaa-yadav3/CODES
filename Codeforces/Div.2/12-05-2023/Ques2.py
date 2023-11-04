for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = sorted(list(map(int, input().split())))
    pre, pre_sum = [0], 0
    for i in arr:
        pre_sum += i
        pre.append(pre_sum)
    i = 0
    j = n - k
    maxSum = max(0, pre[j] - pre[i])
    for __ in range(k):
        i += 2
        j += 1
        maxSum = max(maxSum, pre[j] - pre[i])
    print(maxSum)
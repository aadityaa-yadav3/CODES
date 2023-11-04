def longest_almost_increasing_subsequence(a, l, r):
    n = len(a)
    dp = [1] * n
    for i in range(r):
        for j in range(i):
            if a[j] < a[i]:
                decreasing_pair = False
                for k in range(j):
                    if a[k] > a[j]:
                        decreasing_pair = True
                        break
                if not decreasing_pair:
                    dp[i] = max(dp[i], dp[j] + 1)
    return max(dp[l-1:r])


n, q = map(int, input().split())
arr = list(map(int, input().split()))
qu = []
for _ in range(q):
    l, r = map(int, input().split())
    print (longest_almost_increasing_subsequence(arr, l, r))
# make recursive model, memoize it, create top-down mode

# recursive model
def  maxProfRec(weight, value, W, n):
    if (n == 0 or W == 0):
        return 0
    if (weight[n] <= W):
        return max(value[n] + maxProf(weight, value, W - weight[n], n-1), maxProf(weight, value, W, n-1))
    else:
        return maxProf(weight, value, W, n-1)


# iterative Model
def maxProf(weight, value, W, n):
    for i in range(n+1):
        for j in range(W+1):
            if (i == 0 or j == 0):
                dp[i][j] = 0
            elif (weight[i-1] <= j):
                dp[i][j] = max(value[i-1] + dp[i-1][j-weight[i-1]], dp[i-1][j])
            else:
                dp[i][j] = dp[i-1][j]
    return dp[n][W]


for _ in range(int(input())):
    n = int(input())
    weight = list(map(int, input().split()))
    value = list(map(int, input().split()))
    W = int(input())
    dp = [[0]*(W+1)]*(n+1)
    print(maxProf(weight, value, W, n))
# iterative Model
def maxProf(arr, sum, n):
    for i in range(n + 1):
        for j in range(sum + 1):
            if (i == 0):
                dp[i][j] = False
            if (j == 0):
                dp[i][j] = True

    for i in range(1, n + 1):
        for j in range(1, sum + 1):
            if (arr[i-1] <= j):
                dp[i][j] = (dp[i-1][j-arr[i-1]] or dp[i-1][j])
            else:
                dp[i][j] = dp[i-1][j]

    return dp[n][sum]


for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    sum = int(input())
    dp = ([[False for i in range(sum + 1)]for i in range(n + 1)])
    print(maxProf(arr, sum, n))
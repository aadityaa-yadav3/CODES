def SubsetSum(arr, sum, n):
    # Initializing the matrix
    for i in range(n + 1):
        for j in range(sum + 1):
            if (i == 0):
                dp[i][j] = False
            if (j == 0):
                dp[i][j] = True

    for i in range(n+1):
        for j in range(sum+1):
            if (arr[i-1] <= j):
                dp[i][j] = (dp[i-1][j-arr[i-1]] or dp[i-1][j])
            else:
                dp[i][j] = dp[i-1][j]
    return dp[n][sum]


def EqualSum(arr, sum, n):
    if (sum % 2 != 0):
        return False
    else:
        return SubsetSum(arr, sum//2, n)
    
n = int(input())
arr = list(map(int, input().split()))
sum = sum(arr)
dp = ([[False for i in range(sum+1)] for i in range(n+1)])
print(EqualSum(arr, sum, n))
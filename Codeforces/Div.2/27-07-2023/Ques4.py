def min_coins_to_paint_red(arr):
    coins = 0

    for i in range(len(arr)):
        if arr[i] == 0:
            continue
        elif arr[i] == 1:
            if (i > 0 and (arr[i-1] == 0 or arr[i-1] == 1)):
                coins += 1
            elif (i < len(arr)-1  and (arr[i + 1] == 0 or arr[i+1] == 1)):
                coins += 1
        elif arr[i] == 2:
            if i > 0 and arr[i - 1] > 0:
                arr[i - 1] -= 1
                coins += 1
            elif i < len(arr) - 1 and arr[i + 1] == 0:
                arr[i + 1] = 1
                coins += 1

    return coins

# Example usage:
n = int(input())
arr = list(map(int, input().split()))
result = min_coins_to_paint_red(arr)
print(result)  # Output will be the minimum number of coins required

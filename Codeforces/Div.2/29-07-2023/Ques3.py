def make_non_decreasing(n, arr):
    ans = []
    count = 0

    for i in range(1, n):
        if arr[i] < arr[i - 1]:
            count += 1
            j = i - 1
            while j >= 0 and arr[j] < arr[i]:
                j -= 1
            ans.append([i + 1, j + 1])
            arr[i] += arr[j]

    print(count)
    for ch in ans:
        print(*ch)

# Input number of test cases
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    make_non_decreasing(n, arr)

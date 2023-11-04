for _ in range(int(input())):
    import math
    n = int(input())
    a = list(map(int, input().split()))
    cost = [0] * n
    for i in range(n):
        max_score = 1
        last_index = i
        for j in range(1, i + 2):
            score = math.prod(a[i - j + 1:i + 1]) / math.factorial(j)
            if score >= max_score:
                max_score = score
                last_index = i - j + 1
        cost[i] = i - last_index + 1
    print(*cost)
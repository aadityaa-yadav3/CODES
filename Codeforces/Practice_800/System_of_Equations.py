n, m = map(int, input().split())
count = 0
for i in range(1000):
    for j in range(1000):
        if (((i**2) + j == n) and ((j**2) + i == m)):
            count += 1
print(count)
count = 0
for _ in range(int(input())):
    p, q = map(int, input().split())
    count += 1 if q - p >= 2 else 0
print(count)
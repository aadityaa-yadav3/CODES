n, m = map(int, input().split())
count = 0
while n != m:
    if n > m or m % 2 : m += 1
    else : m //= 2
    count += 1
print(count)
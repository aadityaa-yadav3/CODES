count = 0
for _ in range(int(input())): count += 1 if input().count("1") > 1 else 0
print(count)
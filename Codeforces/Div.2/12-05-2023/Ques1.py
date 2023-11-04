for _ in range(int(input())):
    str = list(input())
    counts = {x: str.count(x) for x in str}
    count = 0
    for key, value in counts.items():
        if value > 1:
            count += 1
    print("YES" if count > 1 else "NO")
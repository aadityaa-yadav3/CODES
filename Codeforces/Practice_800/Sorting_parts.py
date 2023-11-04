for _ in range(int(input())):
    n, a = int(input()), list(map(int, input().split()))
    print("YES" if a != sorted(a) else "NO")
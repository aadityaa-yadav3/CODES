for _ in range(int(input())):
    n, m = map(int, input().split())
    s = input() + input()[::-1]
    count = 0
    for i in range(len(s) -1):
        if s[i] == s[i+1]: count += 1
    print("YES" if count < 2 else "NO")
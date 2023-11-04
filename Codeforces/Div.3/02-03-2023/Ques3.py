for _ in range(int(input())):
    n = int(input())
    c = 1
    s = input()
    for i in range(1, len(s) - 1):
        if s[i - 1] != s[i + 1]:
            c += 1
    print(c)
for _ in range(int(input())):
    n = int(input())
    a, b = [], []
    for i in range(n):
        x, y = map(int, input().split())
        a.append(x); b.append(y)
    bigger = a if max(a) >= max(b) else b
    smaller = b if max(a) >= max(b) else a
    for i in range(n):
        if max(smaller) - i in bigger and (smaller.index(max(smaller)) != bigger.index(max(smaller) - i)):
            print(i)
            break
def antiPal(s, n, idx, tmpCount, count):
    if (idx == n//2):
        if (tmpCount < count):
            count = tmpCount
        print(s)
        return count
    else:
        for i in range(n//2):
            if (s[idx] != s[i]):
                antiPal(s, n, idx+1, tmpCount + 1, count)



for _ in range(int(input())):
    n = int(input())
    s = input()
    count = n
    if (n%2 != 0):
        print("-1")
    else:
        print(antiPal(s, n, 0, 0, n))
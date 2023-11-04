for _ in range(int(input())):
    n, s = int(input()), input()
    l, d= n, [0, 1]
    while (l>0):
        if s[0] == s[-1]: break
        else: s = s[1:l-1:]; l -= 2
    print(l)
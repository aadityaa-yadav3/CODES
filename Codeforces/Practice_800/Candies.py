from math import log
for _ in range(int(input())):
    n = int(input())
    s = 3
    x = 1
    while (n % s != 0):
        s = s*2 + 1
    print(n//s)
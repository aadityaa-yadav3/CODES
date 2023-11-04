from math import comb
for _ in range(int(input())):
    n, k = map(int, input().split())
    for i in range(n//2+1):
        if (k == comb(i,2)+comb(n-i,2)):
            print("Yes")
            print("1"+" -1"*i+" 1"*(n-i-1))
            break
    else:
        print("NO")
for _ in range(int(input())):
    n = int(input())
    div = n
    od = 0
    if (n & 1):
        od = 1
    while (div > 2):
        div //= 2
        if (div & 1):
            if (n % div == 0):
                od = 1
                break
    print("YES" if od else "NO")

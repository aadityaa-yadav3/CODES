for _ in range(int(input())):
    b, c, h = map(int, input().split())
    2 + c + h + 1
    count = 0
    b -= 1
    while(b > 0 and c > 0):
        c -= 1
        count += 1
        b-=1
    while (b > 0 and h > 0):
        h -= 1
        count += 1
        b-=1
    if count > 1:
        print(2+ 2*count -1)
    else :
        print(3)
    # print(min(b, h + c))


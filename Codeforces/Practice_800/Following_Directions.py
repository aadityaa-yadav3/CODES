for _ in range(int(input())):
    n, s = int(input()), list(input())
    x, y = 0, 0
    for direction in s:
        if direction == "R": x += 1
        elif direction == "U": y += 1
        elif direction == "D": y -= 1
        else: x -= 1
        if x == 1 and y == 1: print("YES");break
    else: print("NO")
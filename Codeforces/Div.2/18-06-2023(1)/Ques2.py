def max_weapon_strength(L, R):
    
    maxl = max(len(str(L)), len(str(R)))
    l = "0"*(maxl-len(str(L))) + str(L)
    r = "0"*(maxl-len(str(R))) + str(R)
    max_strength = int (r[0])- int(l[0])
    ch = 1
    for i in range(1, maxl):
        if ch == 1 and l[i-1] == r[i-1]:
            max_strength += int(r[i]) - int(l[i])
        else:
            ch = 0
            max_strength += 9
    return max_strength


for _ in range(int(input())):
    n1, n2 = map(int, input().split())
    # print(max_weapon_strength(n1, n2))
    print(max_weapon_strength(n1, n2))
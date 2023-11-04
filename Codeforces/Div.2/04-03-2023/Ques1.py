for _ in range(int(input())):
    n = int(input())
    arr = input().split()
    substrs, i = ["",""], 0
    for sub in arr:
        if len(sub) == n - 1:
            substrs[i] = sub
            i += 1
    # print(substrs)
    # print( substrs[0][:len(substrs[0])-1] + substrs[1][len(substrs)-2::], (substrs[0][:len(substrs[0])-1] + substrs[1][len(substrs)-2::])[::-1])
    # print(substrs[1][:len(substrs[0])-1] + substrs[0][len(substrs)-2::], (substrs[1][:len(substrs[0])-1] + substrs[0][len(substrs)-2::])[::-1])
    if sorted(substrs[1]) == sorted(substrs[0]):
        print("YES" if substrs[0][:len(substrs[0])-1] + substrs[1][len(substrs)-2::] == (substrs[0][:len(substrs[0])-1] + substrs[1][len(substrs)-2::])[::-1] or substrs[1][:len(substrs[0])-1] + substrs[0][len(substrs)-2::] == (substrs[1][:len(substrs[0])-1] + substrs[0][len(substrs)-2::])[::-1] else "NO")
    else :print("NO")
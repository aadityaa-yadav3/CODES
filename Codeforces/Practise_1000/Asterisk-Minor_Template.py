from re import search
for _ in range(int(input())):
    a, b = input(), input()
    if a[0] == b[0]:
        print("YES\n%s*" %a[0])
    elif a[-1] == b[-1]:
        print("YES\n*%s" %a[-1])
    elif len(a) == 1 or len(b) == 1:
        print("NO")
    else:
        substrings = [a[i: i+2] for i in range(len(a)-1)]
        sub1 = a if len(a) < len(b) else b
        sub2 = b if len(a) < len(b) else a
        for i in range(len(sub1) -1):
            if sub1[i:i+2] in sub2:
                print("YES\n*%s*" %sub1[i:i+2])
                break
        else:
            print("NO")
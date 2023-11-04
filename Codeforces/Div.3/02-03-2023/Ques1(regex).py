import re
for _ in range(int(input())):
    n, s = int(input()), input().lower()
    if (re.match('^[m]+[e]+[o]+[w]+$', s)):
        print("YES")
    else:
        print("NO")
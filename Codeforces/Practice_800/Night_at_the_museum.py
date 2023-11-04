s = "a" + input().lower()
sm = 0
for i in range(1,len(s)):
    diff = abs(ord(s[i])-ord(s[i - 1]))
    sm += min(diff, 26 - diff)
print(sm)
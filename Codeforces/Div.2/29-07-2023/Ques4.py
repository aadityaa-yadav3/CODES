def solve():
    n = int(input())

    sta = []
    temp = list(map(int, input().split()))
    ans = 0
    x = 0


    while temp:
        sta.append(temp.pop())

    while sta:
        if len(sta) - 1 <= sta[-1]:
            sta.pop()
            while sta:
                ans += sta.pop()
        while sta and sta[-1] != 0:
            x = sta.pop()
            while x > 0 and x <= len(sta):
                ans += sta.pop()

    print(ans)

def main():
    t = 1
    while t > 0:
        solve()
        t -= 1

if __name__ == "__main__":
    main()

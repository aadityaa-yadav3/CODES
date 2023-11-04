for _ in range(int(input())):
    num = int(input())
    ans = int((num - 1)**0.5)
    print(ans if ans*ans < num else ans-1)
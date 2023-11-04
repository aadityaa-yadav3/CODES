def code():
    n = int(input())
    arr = list(map(int, input().split()))
    c = 0
    for i in range(n):
        if arr[i] == i + 1:
            c += 1
    print((c + 1) // 2)

def main():
    t = int(input())
    for _ in range(t):
        code()

if __name__ == "__main__":
    main()

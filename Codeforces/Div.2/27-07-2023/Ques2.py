def find_max_index(monsters):
    ans = float("-inf")
    index = 0
    for i in range(len(monsters)):
        if monsters[i] > ans:
            ans = monsters[i]
            index = i
    return index

def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        monsters = list(map(int, input().split()))
        counter = 1
        while counter <= n:
            index = find_max_index(monsters)
            monsters[index] -= k
            if monsters[index] <= 0:
                print(index + 1, end=" ")
                counter += 1
        print()

if __name__ == "__main__":
    main()

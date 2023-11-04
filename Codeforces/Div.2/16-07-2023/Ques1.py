def can_vika_escape(n, m, x, y, friends):
    for friend in friends:
        if abs(friend[0] - x) + abs(friend[1] - y) <= 1:
            return False
    return True

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    x, y = map(int, input().split())
    friends = []
    for i in range(k):
        tmp = [0,0]
        tmp[0], tmp[1] = map(int, input().split())
        friends.append(tmp)

    escape_possible = can_vika_escape(n, m, x, y, friends)
    if escape_possible:
        print("YES")
    else:
        print("NO")

# Example usage:
# n = 5
# m = 5
# x = 3
# y = 3
# friends = [(2, 2), (3, 4), (4, 3)]


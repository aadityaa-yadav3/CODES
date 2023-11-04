def game_duration(S, T):
    S = list(S)
    T = list(T)
    n = len(S)
    moves = 0
    i = 0
    # while S!= T and i < n:
        # Alice's turn
    
    while i < n:
        if S[i] == T[n-i-1] or S[i] == T[i]:
            i+=1
        else:
            # print(S, T, moves)
            S[i] = T[n-i-1]
            i+=1
            moves+=1
            if (S == T[::-1] or S == T):
                break
            else:
                T = T[::-1]
                moves += 1
    if (moves == 0 and S != T):
        moves = 2
    return moves

# Example usage:
# S = "abcde"
# T = "vwxyz"
# duration = game_duration(S, T)
# print("Duration of the game:", duration)

for _ in range(int(input())):
    num = int(input())
    s = input()
    t = input()
    print(game_duration(s, t))
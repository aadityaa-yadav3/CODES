def permutations_in_lex_order(s):
    if len(s) == 1:
        return [s]
    perms = []
    for i in range(len(s)):
        for perm in permutations_in_lex_order(s[:i] + s[i+1:]):
            perms.append(s[i] + perm)
    return sorted(perms)

s = input()
perms = permutations_in_lex_order(s)
for perm in perms:
    print(perm)
def construct_permutation(n):
    perm = list(range(1, n+1))
    for i in range(0, n-1, 2):
        perm[i], perm[i+1] = perm[i+1], perm[i]
        
    return perm

def check_condition(perm):
    n = len(perm)
    
    for l in range(1, n):
        for r in range(l+1, n+1):
            if sum(perm[l-1:r]) % (r-l+1) == 0:
                return False
    
    return True


for _ in range(int(input())):
    n = int(input())
    arr = construct_permutation(n)
    if (check_condition(arr)):
        print(*arr)
    else:
        print("-1")
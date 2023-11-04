def generate_equalities(A,B,C,k):
    equalities = []
    
    for a in range(10**(A-1), 10**A):
        for b in range(10**(B-1), 10**B):
            c = a + b
            if len(str(c)) == C:
                equalities.append((a, b, c))
    
    equalities.sort()
    
    if k <= len(equalities):
        a, b, c = equalities[k - 1]
        result = f"{a} + {b} = {c}"
    else:
        result = -1
    

    return result


n = int(input())

for _ in range(n):
    a,b,c,k = map(int, input().split())
    print(generate_equalities(a,b,c,k))
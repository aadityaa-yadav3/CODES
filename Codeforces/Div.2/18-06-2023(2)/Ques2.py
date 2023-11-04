for _ in range(int(input())):
    n, k, g = map(int, input().strip().split())
    
    if g%2 == 0:
        checker = g//2
        silver = g//2 - 1
    else:
        checker = g//2 + 1
        silver = g//2
    
    if (n-1)*silver >= k*g:
        ans = k*g
    else:
        final = (k * g) - ((n - 1) * silver)
        remainder = final % g
        if remainder >= checker:
            ans = (k * g) - (final + g - remainder)
        else:
            ans = (k * g) - (final - remainder)
    
    print(ans)
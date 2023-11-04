import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def fill_grid(n, m):
    grid = [[0] * m for _ in range(n)]
    currNum = 1

    def check_adjacent(row, col):
        nonlocal currNum
        # Up
        if row > 0 and abs(grid[row-1][col] - grid[row][col]) in primes:
            grid[row][col] = currNum
            currNum += 1
            return True
        # Down
        if row < n - 1 and abs(grid[row+1][col] - grid[row][col]) in primes:
            grid[row][col] = currNum
            currNum += 1
            return True
        # Left
        if col > 0 and abs(grid[row][col-1] - grid[row][col]) in primes:
            grid[row][col] = currNum
            currNum += 1
            return True
        # Right
        if col < m - 1 and abs(grid[row][col+1] - grid[row][col]) in primes:
            grid[row][col] = currNum
            currNum += 1
            return True
        return False

    primes = set()
    for num in range(2, n * m + 1):
        if is_prime(num):
            primes.add(num)

    for row in range(n):
        for col in range(m):
            if grid[row][col] == 0:
                grid[row][col] = currNum
                currNum += 1
                while check_adjacent(row, col):
                    pass

    return grid

# Test example with n=4, m=4
grid = fill_grid(4, 4)
for row in grid:
    print(' '.join(str(cell) for cell in row))

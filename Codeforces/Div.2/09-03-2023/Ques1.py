for _ in range(int(input())):
    n, arr = int(input()), list(map(int, input().split()))
    positive, negative = 0, 0
    for num in arr:
        if num > 0: positive += 1
        elif num < 0 : negative += 1
    print(*(x+1 for x in range(positive)), *(positive - z -1 for z in range(negative)))
    print("1 0 "*min(positive, negative), end = "");print(*(x+1 for x in range(abs(positive- negative))), sep = " ")
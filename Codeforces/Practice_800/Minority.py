for _ in range(int(input())):
    s = input()
    values = [0,0]
    for i in s:
        if (i == "0"):
            values[0] += 1
        else :
            values[1] += 1
    if (len(values) == 1):
        print(0)
    elif (values[0] == values[1]):
        print(values[0]-1)
    else:
        print(min(values))
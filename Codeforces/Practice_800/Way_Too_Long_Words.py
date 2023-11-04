for _ in range(int(input())):
    string = input()
    if len(string) > 10: print(string[0], (len(string)-2), string[-1], sep = "")
    else: print(string)
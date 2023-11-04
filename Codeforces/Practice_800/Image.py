for _ in range(int(input())):
    arr = input()
    arr += input()
    d = {x : arr.count(x) for x in arr}
    print( len(d.keys()) - 1)
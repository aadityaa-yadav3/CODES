arr = list(map(int, input().split()))
myD = {x: arr.count(x) for x in arr}
print(4-len(myD))
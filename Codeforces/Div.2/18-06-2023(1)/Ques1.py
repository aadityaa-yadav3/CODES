import math

for _ in range(int(input())):
    num = int(input())
    arr = list(map(int,input().split()))
    # negative > positive
    # negative % 2 == 0
    count = 0
    negative = arr.count(-1)
    positive = arr.count(1)
    while(positive != num):
        if (negative <= positive and negative % 2 == 0):
            break
        negative -= 1
        positive += 1
        count += 1
        
    print(count)
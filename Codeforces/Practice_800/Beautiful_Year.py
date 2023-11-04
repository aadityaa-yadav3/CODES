num = int(input())
num += 1
while True:
    if (len(set(str(num))) == len(str(num))):
        break
    else:
        num += 1
print(num)
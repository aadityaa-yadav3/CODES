testcases= int(input())
while(testcases):
    num = int(input())
    if (num % 2 != 0):
        print("Yes")
        for i in range(1,num+1):
            pos = num//2
            if i <= pos:
                print(i,i+num+pos+1)
            else:
                print(i,i-pos+num)
    else:
        print("No")
    testcases-=1
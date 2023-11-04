for _ in range(int(input())):
    num = int(input())
    arr = list(map(int, input().split()))
    m = arr.count(0)
    # dic = {x : arr.count(x) for x in arr}
    # values = dic.values
    # for i in range(max(arr)+1):
    #     if (dic)
    for i in range(max(arr)+1):
        tmpm = arr.count(i)
        if tmpm<= m:
            m = tmpm
        else:
            print("NO")
            break
    else:
        print("YES")
    # for key, value in dic.values():
        # print(key, value)

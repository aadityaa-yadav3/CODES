for _ in range(int(input())):
    num = int(input())
    arr = list(map(int, input().split()))
    if len(arr)<=2:
        print('1 1')
    else:
        max = arr.index(num)
        one = arr.index(1)
        two = arr.index(2)
        if one<max<two or two<max<one:
            print('1 1')
        elif max<one<two or two<one<max:
            print(f'{max+1} {one+1}')
        elif max<two<one or one<two<max:
            print(f'{max+1} {two+1}')
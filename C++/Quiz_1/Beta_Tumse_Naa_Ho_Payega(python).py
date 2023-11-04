def power_set(string, size):
    if size == 0:
        return ['']
    if size == len(string):
        return [string]
    ans = []
    for i in range(len(string)):
        for subset in power_set(string[i+1:], size-1):
            ans.append(string[i] + subset)
    return ans

string = input()
size, rank = map(int, input().split())

pset = sorted(power_set(string, size))
print(pset[rank-1])

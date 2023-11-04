import sys
import os
from bisect import bisect

def absCost(lesser, greater, dVal):
    return((len(lesser)*dVal-sum(lesser))+sum(greater)-(len(greater)*dVal))

n, m = map(int, input().split())
arr = list(map(int, input().split()))
queries = list(map(int, input().split()))

arr.sort()
ans = []
for dVal in queries:
    lesser=[]
    greater=[]
    i = 0
    index_of_just_smaller = bisect(arr, dVal)-1
    lesser = arr[:index_of_just_smaller+1]
    greater = arr[index_of_just_smaller:]
    ans.append(str(absCost(lesser, greater, dVal)))

print(' '.join(ans))


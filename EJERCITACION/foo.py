# 
from itertools import groupby
list1 = [-1, -1, 1, 1, 1, -1, 1]
for x,y in groupby(list1):
    print (x,list(y))
# count_dups = [sum(1 for _ in group) for _, group in groupby(list1)]
# print(count_dups)

for _, group in groupby(list1):
    print(sum(1 for _ in group))


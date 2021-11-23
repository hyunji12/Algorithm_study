import re

strlist = []
num = int(input())

for i in range(num):
    s = input()
    strlist.append(s)

num_list = []

for strlists in strlist:
    number = re.findall("\d+", strlists)
    number = list(map(int, number))
    num_list += number

num_list.sort()

for i in num_list:
    print(i)
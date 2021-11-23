score_list = []

for i in range(8):
    score = int(input())
    score_list += [score]

sorted_list = sorted(score_list, reverse=True)

sum = 0
big = []
for i in range(5):
    big += [sorted_list[i]]
    sum += sorted_list[i]

idx = []
for i in big:
    idx.append(score_list.index(i))

print(sum)
for i in sorted(idx):
    print(i+1, end=" ")
print()
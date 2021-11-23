r, c = map(int, input().split())
row = [0,r]
col = [0,c]

num = int(input())
for i in range(num):
    rc, cut = map(int, input().split())
    if rc == 1:
        row.append(cut)
    else:
        col.append(cut)

row.sort()
col.sort()

sub_r = []
sub_c = []
for i in range(len(row)-1):
    sub_r.append(row[i+1] - row[i])
for i in range(len(col)-1):
    sub_c.append(col[i+1] - col[i])

sub_r.sort(reverse=True)
sub_c.sort(reverse=True)

answer = sub_r[0] * sub_c[0]
print(answer)

import sys
input = sys.stdin.readline #반복문으로 여러줄을 입력받으면 시간초과가 발생할 수 있기 때문에 사용함.

t = int(input())
for i in range(t):
    leng, num = map(int, input().split())
    ants = []
    for i in range(num):
        k = int(input())
        ants.append(k)

    min_ant = 0
    max_ant = 0
    for i in ants:
        if i > leng-i:
            if min_ant < leng-i:
                min_ant = leng-i
            if max_ant < i:
                max_ant = i
        else:
            if min_ant < i:
                min_ant = i
            if max_ant < leng-i:
                max_ant = leng-i

    print(min_ant,max_ant)
import sys
input = sys.stdin.readline #반복문으로 여러줄을 입력받으면 시간초과가 발생할 수 있기 때문에 사용함.

def solution(L, list):
    answer = []

    min_l = []
    max_l = []
    for i in range(len(list)):
        if list[i] > L-list[i]:
            min_l.append(L-list[i])
            max_l.append(list[i])
        else:
            min_l.append(list[i])
            max_l.append(L-list[i])
    
    min_l.sort(reverse=True)
    max_l.sort(reverse=True)

    answer.append(min_l[0])
    answer.append(max_l[0])
    return answer

t = int(input())
for i in range(t):
    leng, num = map(int, input().split())
    num_l = []
    for i in range(num):
        k = int(input())
        num_l.append(k)

    answer = solution(leng, num_l)
    print(answer[0], answer[1])

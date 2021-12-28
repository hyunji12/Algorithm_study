def find_longest(string):
    cnt = 1
    answer = 1

    for i in range(1, len(string)):
        if string[i] == string[i-1]:
            cnt +=1
            if cnt > answer:
                answer = cnt
        else:
            cnt = 1
    return answer

for _ in range(3):
    string = input()
    print(find_longest(string))
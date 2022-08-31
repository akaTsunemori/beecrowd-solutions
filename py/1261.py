m, n = map(int, input().split())

hayPoint = dict()

while m > 0:
    role, salary = input().split()
    salary = int(salary)

    hayPoint[role] = salary
    m -= 1

employee = [0 for i in range(n)]
index = 0
while index != n:
    sentence = input()

    if sentence == '.':
        index += 1

    else:
        sentence = sentence.split()
        
        for i in sentence:
            if i in hayPoint:
                employee[index] += hayPoint[i]

print(*employee, sep='\n')
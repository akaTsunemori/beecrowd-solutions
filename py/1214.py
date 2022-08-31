n = int(input())

for _ in range(n):
    grades = [int(i) for i in input().split()]
    students = grades.pop(0)

    average = sum(grades) / students
    above = [i for i in grades if i > average]

    print(f'{((len(above) / len(grades)) * 100):.3f}%')
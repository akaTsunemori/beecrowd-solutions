from sys import stdin, setrecursionlimit

setrecursionlimit(10**5)

def flaviousJosephus(n, k):
    if n == 1:
        return 1
    else:
        return (flaviousJosephus(n - 1, k) + k - 1) % n + 1

count = int(stdin.readline())
testCases = []
while count > 0:
    testCases.append(list(map(int, stdin.readline().split())))
    count -= 1

i = 1
for case in testCases:
    print(f'Case {i}: {flaviousJosephus(case[0], case[1])}')
    i += 1
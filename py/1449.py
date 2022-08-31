t = int(input())

while t > 0:
    jp_pt = dict()

    m, n = map(int, input().split())
    
    for i in range(m):
        index = input()
        jp_pt[index] = input()

    for i in range(n):
        line = input().split()

        for i, j in enumerate(line):
            if j in jp_pt:
                line[i] = jp_pt[j]

        print(*line)

    print('')
    t -= 1
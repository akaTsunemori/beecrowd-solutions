n = int(input())

for _ in range(n):
    m = int(input())
    nameFrequency = zip(input().split(), input().split())
    notFrequentEnough = []

    for name, frequency in nameFrequency:
        present, absent = 0, 0

        for i in frequency:
            if i == 'P':
                present += 1

            elif i == 'A':
                absent += 1

        if present / (present + absent) < 0.75:
            notFrequentEnough.append(name)

    print(*notFrequentEnough)
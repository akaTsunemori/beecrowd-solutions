cases = []
count = 0

while True:
    try:
        cases.append(int(input()))

    except EOFError:
        break

for i in cases:
    sequence = [0]
    count += 1

    for j in range(0, i + 1):
        sequence.extend([j] * j)

    print(f'Caso {count}: {len(sequence)} numero' + 's' * (len(sequence) > 1))
    print(*sequence)
    print('')
def main():
    frequencies = dict()
    dead = set()

    while True:
        try:
            murderer, murdered = input().split()
            dead.add(murdered)

            if murderer not in frequencies:
                frequencies[murderer] = 0

            frequencies[murderer] += 1

        except EOFError:
            break

    for i in dead:
        try:
            frequencies.pop(i)
        except KeyError:
            continue

    print('HALL OF MURDERERS')
    murderers = sorted(frequencies)

    for i in murderers:
        print(i, frequencies[i])


main()
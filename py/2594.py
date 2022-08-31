def main():
    n = int(input())

    for _ in range(n):
        sentence = input().split()
        search = input()
        pos = 0
        positions = []

        for word in sentence:
            if word == search:
                positions.append(pos)

            pos += len(word) + 1

        if len(positions) > 0:
            print(*positions)
        else:
            print(-1)


main()
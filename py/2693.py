def main():
    while True:
        try:
            n = int(input())
            entries = []

            for _ in range(n):
                name, char, distance = input().split()
                distance = int(distance)
                entries.append((name, char, distance))

            entries.sort(key=lambda a: a[0])
            entries.sort(key=lambda a: a[1])
            entries.sort(key=lambda a: a[2])

            for i in entries:
                print(i[0])

        except EOFError:
            break


if __name__ == '__main__':
    main()
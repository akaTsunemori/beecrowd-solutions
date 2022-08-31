def main():
    while True:
        n = int(input())

        if n == 0:
            break

        numbers = input().split()
        frequencies = dict()
        result = 0

        for number in numbers:
            number = int(number)

            if number not in frequencies:
                frequencies[number] = 0

            frequencies[number] += 1

        for number in frequencies:
            if frequencies[number] % 2 != 0:
                result = number
                break

        print(result)


if __name__ == '__main__':
    main()
def main() -> None:
    count = 1
    while True:
        n = int(input())
        if n == 0:
            break
        even, odd = input(), input()
        print('Teste', count)
        for _ in range(n):
            result = sum([int(i) for i in input().split()])
            if result % 2 == 0:
                print(even)
            else:
                print(odd)
        print('')
        count += 1


if __name__ == '__main__':
    main()

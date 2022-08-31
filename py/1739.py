def main() -> None:
    a, b = 0, 1
    fibo = []
    while len(fibo) < 61:
        if b % 3 == 0 or '3' in str(b):
            fibo.append(b)
        a, b = b, a + b
    while True:
        try:
            n = int(input())
        except EOFError:
            break
        print(fibo[n - 1])


if __name__ == '__main__':
    main()

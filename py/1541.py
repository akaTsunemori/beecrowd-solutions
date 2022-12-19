def main() -> None:
    while True:
        try:
            a, b, c = input().split()
        except ValueError:
            break
        a, b, c = int(a), int(b), int(c)
        print(int(((a * b * 100) / c) ** 0.5))


main()

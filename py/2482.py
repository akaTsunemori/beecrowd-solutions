def main():
    n = int(input())
    languages = dict()

    for _ in range(n):
        a, b = input(), input()
        languages[a] = b

    n = int(input())

    for _ in range(n):
        a, b = input(), input()
        print(f'{a}\n{languages[b]}\n')


if __name__ == '__main__':
    main()
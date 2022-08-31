from sys import stdin, stdout


def main() -> None:
    input = stdin.readline
    print = stdout.write
    while True:
        try:
            a = int(input())
        except ValueError:
            break
        if a % 6 == 0:
            print('Y\n')
        else:
            print('N\n')


if __name__ == '__main__':
    main()

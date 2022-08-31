from sys import stdin, stdout


def main() -> None:
    input = stdin.readline
    print = stdout.write
    while True:
        a = [int(i) for i in input().split()]
        if set(a) == {0}:
            break
        x1, y1, x2, y2 = a
        if x1 == x2 and y1 == y2:
            print('0\n')
        elif x1 == x2 or y1 == y2:
            print('1\n')
        elif abs(x1 - x2) == abs(y1 - y2):
            print('1\n')
        else:
            print('2\n')


if __name__ == '__main__':
    main()

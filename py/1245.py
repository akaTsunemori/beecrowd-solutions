from collections import defaultdict
from sys import stdin, stdout


def main() -> None:
    input = stdin.readline
    print = stdout.write
    while True:
        try:
            n = int(input())
        except ValueError:
            break
        pairs = defaultdict(lambda: defaultdict(int))
        count = 0
        for _ in range(n):
            m, l = input().split()
            pairs[m][l] += 1
        for size in pairs:
            aux = pairs[size]['D'] + pairs[size]['E']
            aux -= abs(pairs[size]['D'] - pairs[size]['E'])
            count += aux // 2
        print(str(count) + '\n')


if __name__ == '__main__':
    main()

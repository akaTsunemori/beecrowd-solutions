from collections import defaultdict


def main() -> None:
    while True:
        n, m = [int(i) for i in input().split()]
        if n == 0:
            break
        tickets = [int(i) for i in input().split()]
        frequencies = defaultdict(int)
        for i in tickets:
            frequencies[i] += 1
        count = 0
        for i in frequencies:
            if frequencies[i] > 1:
                count += 1
        print(count)


if __name__ == '__main__':
    main()

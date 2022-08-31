from sys import stdin, stdout


def main() -> None:
    input = stdin.readline
    print = stdout.write
    age_sum = 0
    count = 0
    while True:
        try:
            name = input()
            age = int(input())
        except ValueError:
            break
        age_sum += age
        count += 1
    age_sum *= 10
    count *= 10
    print(f'{(age_sum / count):.1f}\n')


if __name__ == '__main__':
    main()
from math import fmod


def main():
    while True:
        n, m = [int(i) for i in input().split()]
        values = list()

        if n == 0 and m == 0:
            print('0 0')
            break

        for _ in range(n):
            aux = int(input())
            values.append(aux)

        even_numbers = [i for i in values if i % 2 == 0]
        odd_numbers = [i for i in values if i % 2 != 0]
        even_numbers.sort()
        odd_numbers.sort(reverse=True)
        result = odd_numbers + even_numbers
        result.sort(key=lambda a: fmod(a, m))
        print(n, m)
        print(*result, sep='\n')


if __name__ == '__main__':
    main()

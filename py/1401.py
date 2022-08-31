from itertools import permutations

def main():
    n = int(input())

    for _ in range(n):
        prm = sorted(set(permutations([i for i in input()])))

        for p in prm:
            print(*p, sep='')

        print('')


main()
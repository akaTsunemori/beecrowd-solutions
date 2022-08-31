def main():
    while True:
        try:
            n = int(input())
            map = dict()

            for _ in range(n):
                meat, expiration = input().split()
                expiration = int(expiration)
                map[expiration] = meat

            result = [i[1] for i in sorted(map.items())]
            print(*result)

        except EOFError:
            break


main()
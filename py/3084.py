def main():
    while True:
        try:
            h, m = map(int, input().split())
            h, m = h // 30, m // 6
            print(f'{h:02d}:{m:02d}')

        except EOFError:
            break


main()
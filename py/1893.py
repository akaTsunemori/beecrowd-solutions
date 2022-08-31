def main() -> None:
    a, b = [int(i) for i in input().split()]
    if 0 <= b <= 2:
        print('nova')
    elif 97 <= b <= 100:
        print('cheia')
    elif a < b:
        print('crescente')
    else:
        print('minguante')


if __name__ == '__main__':
    main()

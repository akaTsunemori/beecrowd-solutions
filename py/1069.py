def main():
    n = int(input())

    for _ in range(n):
        string = input()
        a, b = 0, 0

        for i in string:
            if i == '<':
                a += 1
            elif i == '>' and a > b:
                b += 1

        print(b)


main()
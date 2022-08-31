def main():
    half = int(input())
    half //= 2
    count, start, position = 1, 1, 1

    while position != 0:
        if start < half:
            position = start
            start = 2 * position + 1

        else:
            position = start - half
            start = 2 * position

        count += 1

    print(count)


main()
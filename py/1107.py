def main() -> None:
    while True:
        a, c = [int(i) for i in input().split()]
        if a == c == 0:
            break
        heights = [int(i) for i in input().split()]
        result = a - heights[0]
        for i in range(1, c):
            if heights[i - 1] > heights[i]:
                result += heights[i - 1] - heights[i]
        print(result)


if __name__ == '__main__':
    main()

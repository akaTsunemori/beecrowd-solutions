def main():
    n = int(input())
    stack = []
    count = 0

    for _ in range(n):
        if len(stack) == 0:
            stack.append(['F', 'A', 'C', 'E'])

        blocks = input().split()

        if blocks[::-1] == stack[-1]:
            stack.pop()
            count += 1
        else:
            stack.append(blocks)

    print(count)


if __name__ == '__main__':
    main()
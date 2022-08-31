def main():
    while True:
        try:
            rnaa = input()
            count = 0
            stack = []

            for i in rnaa:
                if (
                    (len(stack) > 0) and (
                        (i == 'B' and stack[-1] == 'S') or
                        (i == 'S' and stack[-1] == 'B') or
                        (i == 'C' and stack[-1] == 'F') or
                        (i == 'F' and stack[-1] == 'C')
                    )
                ):
                    count += 1
                    stack.pop(-1)
                else:
                    stack.append(i)

            print(count)

        except EOFError:
            break


main()
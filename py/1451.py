def main() -> None:
    while True:
        try:
            sentence = input()
        except EOFError:
            break  
        stack = []
        home = []
        count = -1
        flag = False
        for i in sentence:
            if i == '[':
                flag = True
                home.append([])
                count += 1
            elif i == ']':
                flag = False
            elif flag:
                home[count].append(i)
            else:
                stack.append(i)
        home.reverse()
        print(*[''.join(i) for i in home], *stack, sep='')


if __name__ == '__main__':
    main()
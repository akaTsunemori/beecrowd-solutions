def main() -> None:
    a, signal, b = input().split()
    a, b = [i for i in a], [i for i in b]
    for i in range(len(a)):
        if a[i] == '7':
            a[i] = '0'
    for i in range(len(b)):
        if b[i] == '7':
            b[i] = '0'
    if signal == 'x':
        result = [i for i in str(int(''.join(a)) * int(''.join(b)))]
    else:
        result = [i for i in str(int(''.join(a)) + int(''.join(b)))]
    for i in range(len(result)):
        if result[i] == '7':
            result[i] = '0'
    print(int(''.join(result)))


if __name__ == '__main__':
    main()

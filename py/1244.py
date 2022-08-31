def main():
    n = int(input())

    for _ in range(n):
        string = input().split()
        string.sort(key=lambda a:len(a), reverse=True)
        print(*string)


main()
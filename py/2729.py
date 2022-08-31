def main():
    n = int(input())

    for _ in range(n):
        print(*sorted(set(input().split())))


main()
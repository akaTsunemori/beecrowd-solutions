def main():
    t = int(input())

    for count in range(t):
        n, m = [int(i) for i in input().split()]
        names = []
        
        for _ in range(n):
            s, p, i, a = input().split()
            p, i, a = int(p), int(i), float(a)
            names.append((s, p, i, a))

        names.sort(key=lambda a: (a[2], a[3], a[0]))
        names.sort(key=lambda a: a[1], reverse=True)
        print('CENARIO', '{' + str(count + 1) + '}')

        for j in range(m):
            print(f'{j + 1} - {names[j][0]}')


main()
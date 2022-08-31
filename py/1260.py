def main() -> None:
    n = int(input())
    t = input()
    for i in range(n):
        total = 0
        trees = dict()
        t = input()
        while len(t) > 0:
            try:
                trees[t] += 1
            except KeyError:
                trees[t] = 1
            try:
                t = input()
            except EOFError:
                break
            total += 1
        trees_keys = sorted(trees)
        for key in trees_keys:
            print(f'{key} {(trees[key] * 100 / total):.4f}')
        if i < n - 1:
            print('')


if __name__ == '__main__':
    main()
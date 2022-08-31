def main():
    n = int(input())

    for _ in range(n):
        m = int(input())
        a = [i for i in input()]
        a_sorted = sorted(a)
        indexes = {a[i] : i for i in range(m)}
        count = 0
        init = ''
        result = False

        for i in range(m):
            if a[i] != a_sorted[i]:
                count += 1
                init = a[i]
                a[i], a[indexes[a_sorted[i]]] = a[indexes[a_sorted[i]]], a[i]
                indexes[init] = indexes[a_sorted[i]]
                indexes[a_sorted[i]] = i

            if count > 1:
                result = True
                break

        print('There are' + "n't" * result + ' the chance.')
    

main()
from sys import stdin, stdout


def merge(ranking: list, aux: list, left: int, mid: int, right: int) -> int:
    inversions = 0
    i, j, k = left, mid + 1, left
    while i <= mid and j <= right:
        if ranking[i] <= ranking[j]:
            aux[k] = ranking[i]
            i += 1
        else:
            aux[k] = ranking[j]
            inversions += 1 + mid - i
            j += 1
        k += 1
    while i <= mid:
        aux[k] = ranking[i]
        i += 1
        k += 1
    while j <= right:
        aux[k] = ranking[j]
        j += 1
        k += 1
    for i in range(left, right + 1):
        ranking[i] = aux[i]
    return inversions


def divide(ranking: list, tmp: list, left: int, right: int) -> int:
    inversions = 0
    if left < right:
        mid = (left + right) // 2
        inversions += divide(ranking, tmp, left, mid)
        inversions += divide(ranking, tmp, mid + 1, right)
        inversions += merge(ranking, tmp, left, mid, right)
    return inversions


def merge_sort(ranking: list) -> int:
    return divide(ranking, [0] * len(ranking), 0, len(ranking) - 1)


def main():
    while True:
        try:
            n = int(input())
            ranking = [stdin.readline() for _ in range(n)]
            stdout.write(str(merge_sort(ranking)) + '\n')
        except EOFError:
            break


if __name__ == '__main__':
    main()
while True:
    n = int(input())

    if n == 0:
        break

    gifts = sorted([int(i) for i in input().split()])
    sums = set()

    i_a = 0
    i_d = -1

    while i_a < n:
        sums.add(gifts[i_a] + gifts[i_d])
        i_a += 1
        i_d -= 1

    print(max(sums), min(sums))
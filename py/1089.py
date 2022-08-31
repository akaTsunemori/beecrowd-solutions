while True:
    n = int(input())

    if n == 0:
        break

    mag = [int(i) for i in input().split()]
    peaks = 0

    for i in range(1, n - 1):
        if mag[i - 1] < mag[i] > mag[i + 1] or mag[i - 1] > mag[i] < mag[i + 1]:
            peaks += 1

    if mag[-2] < mag[-1] > mag[0] or mag[-2] > mag[-1] < mag[0]:
        peaks += 1

    if mag[-1] < mag[0] > mag[1] or mag[-1] > mag[0] < mag[1]:
        peaks += 1

    print(peaks)
while True:
    n = int(input())
    position = 1
    count = 0

    if n == 0:
        break

    for _ in range(n):
        track = ''.join(input().split())

        if '1' in track:
            count += abs(position - track.find('0'))
            position = track.find('0')

    print(count)
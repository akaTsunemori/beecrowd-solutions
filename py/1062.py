def main() -> None:
    while True:
        n = int(input())
        if n == 0:
            break
        while True:
            wagons = [int(i) for i in input().split()]
            if wagons[0] == 0:
                break
            w_n = n
            result = []
            station = []
            while True:
                if station and station[-1] == w_n:
                    result.append(station.pop())
                    w_n -= 1
                elif wagons and wagons[-1] != w_n:
                    station.append(wagons.pop())
                elif wagons:
                    result.append(wagons.pop())
                    w_n -= 1
                else:
                    break
            if station or wagons:
                print('No')
            else:
                print('Yes')
        print('')


if __name__ == '__main__':
    main()
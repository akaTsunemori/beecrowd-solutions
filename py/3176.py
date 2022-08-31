def main():
    n = int(input())
    gnomes = []
    teams = [[] for _ in range(n // 3)]
    team = 0

    for _ in range(n):
        name, age = input().split()
        age = int(age)
        gnomes.append((name, age))

    gnomes.sort(key=lambda a: a[0])
    gnomes.sort(key=lambda a: a[1], reverse=True)

    for gnome in gnomes:
        if team >= n // 3:
            team = 0

        teams[team].append(gnome)
        team += 1

    team = 1

    for t in teams:
        print('Time', team)
        team += 1

        for player in t:
            print(*player)

        print('')


main()
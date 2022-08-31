n, t = map(int, input().split())

players = []
while n > 0:
    player, skill = input().split()
    skill = int(skill)

    players.append((player, skill))
    n -= 1

players.sort(reverse=True, key=lambda y: y[1])

teams = dict()

count = 1
for i in players:
    if 'Time ' + str(count) not in teams:
        teams['Time ' + str(count)] = set()

    teams['Time ' + str(count)].add(i[0])

    count += 1

    if count > t:
        count = 1

for i in teams:
    print(i)
    print(*sorted(teams[i]), sep='\n')
    print('')
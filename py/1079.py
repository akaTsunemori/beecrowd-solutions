def weightedAverages(list):
    print(f'{((list[0] * 2 + list[1] * 3 + list[2] * 5) / 10):.1f}')

n = int(input())
for i in range(n):
    weightedAverages([float(i) for i in input().split()])
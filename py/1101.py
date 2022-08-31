from sys import stdin

ranges = []
for line in stdin:
    line = list(map(int, line.split()))
    
    if min(line) <= 0:
        break
    else:
        ranges.append(line)
    
for i in ranges:
    r = range(min(i), max(i) + 1)
    print(*r, f'Sum={sum(r)}', sep=' ')
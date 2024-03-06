from sys import stdin, stdout


def a_to_b(a, b, forbidden):
    visited = set(forbidden)
    state = {a}
    depth = 0
    MAX =100_001
    while b not in state:
        if not state:
            return -1
        visited |= state
        state = {v - 1  for v in state if v - 1 not in visited and 0 < v - 1 < MAX} | \
                {v + 1  for v in state if v + 1 not in visited and 0 < v + 1 < MAX} | \
                {v * 2  for v in state if v * 2 not in visited and 0 < v * 2 < MAX} | \
                {v // 2 for v in state if v % 2 == 0 and v // 2 not in visited and 0 < v // 2 < MAX} | \
                {v // 3 for v in state if v % 3 == 0 and v // 3 not in visited and 0 < v // 3 < MAX}
        depth += 1
    return depth


def solve():
    input = stdin.readline
    print = stdout.write
    while True:
        O, D, K = [int(i) for i in input().split()]
        if O+D+K == 0:
            break
        if K > 0:
            forbidden = [int(i) for i in input().split()]
        else:
            forbidden = []
        print(f'{a_to_b(D, O, forbidden)}\n')


solve()

from collections import deque
from sys import stdin, stdout


letters = [None, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
dx = [2, 2, -2, -2, 1, 1, -1, -1]
dy = [1, -1, 1, -1, 2, -2, 2, -2]


class Knight:
    def __init__(self, x, y, dist = 0) -> None:
        self.x = x
        self.y = y
        self.dist = dist


def check_bounds(x, y) -> bool:
    return x > 0 and x < 9 and y > 0 and y < 9


def solution(pos_x, pos_y, targ_x, targ_y) -> int:
    queue = deque()
    queue.append(Knight(pos_x, pos_y))
    visited = [[False for _ in range(9)] for _ in range(9)]
    visited[pos_x][pos_y] = True
    while queue:
        move: Knight = queue.popleft()
        if move.x == targ_x and move.y == targ_y:
            return move.dist
        for i in range(8):
            x = move.x + dx[i]
            y = move.y + dy[i]
            if check_bounds(x, y) and not visited[x][y]:
                visited[x][y] = True
                queue.append(Knight(x, y, move.dist + 1))


def main() -> None:
    input = stdin.readline
    print = stdout.write
    while True:
        try:
            fr, to = input().split()
            fr_a, fr_b = letters.index(fr[0]), int(fr[1])
            to_a, to_b = letters.index(to[0]), int(to[1])
            moves = solution(fr_a, fr_b, to_a, to_b)
            print(f'To get from {fr} to {to} takes {moves} knight moves.\n')
        except ValueError:
            break


if __name__ == '__main__':
    main()

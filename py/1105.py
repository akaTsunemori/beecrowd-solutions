from collections import defaultdict
from sys import stdin, stdout


class Graph:
    def __init__(self) -> None:
        self.inventory = defaultdict(int)

    def fill_inventory(self, inv, b):
        for i in range(1, b + 1):
            self.inventory[i] = inv[i - 1]
    
    def add_edge(self, fr, to, value) -> None:
        self.inventory[fr] -= value
        self.inventory[to] += value

    def check_debt(self) -> bool:
        for i in self.inventory:
            if self.inventory[i] < 0:
                return False
        return True


def main() -> None:
    input = stdin.readline
    print = stdout.write
    while True:
        b, n = [int(i) for i in input().split()]
        if b == 0:
            break
        gr = Graph()
        inventory = [int(i) for i in input().split()]
        gr.fill_inventory(inventory, b)
        for _ in range(n):
            d, c, v = [int(i) for i in input().split()]
            gr.add_edge(d, c, v)
        if gr.check_debt():
            print('S\n')
        else:
            print('N\n')


if __name__ == '__main__':
    main()

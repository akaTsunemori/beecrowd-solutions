from collections import deque
from sys import stdin, stdout

class Stack(object):
    def __init__(self):
        self.stack = deque()
        self.count = 0


    def push(self, value):
        if self.count == 0:
            curr_min = value
        else:
            curr_min = min(value, self.stack[-1][0])

        self.count += 1
        self.stack.append((curr_min, value))


    def pop(self):
        self.count -= 1
        self.stack.pop()


    def get_min(self):
        return self.stack[-1][0]


def main():
    n = int(input())
    stack = Stack()

    for _ in range(n):
        op = stdin.readline().split()

        if op[0] == 'PUSH':
            stack.push(int(op[1]))
        elif stack.count == 0:
            print('EMPTY')
        elif op[0] == 'POP':
            stack.pop()
        else:
            stdout.write(str(stack.get_min()) + '\n')


if __name__ == '__main__':
    main()
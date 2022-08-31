from collections import deque
from sys import stdout


def main() -> None:
    print = stdout.write
    keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"
    keys = dict()
    for i in range(1, len(keyboard)):
        keys[keyboard[i]] = keyboard[i - 1]
    keys['\n'] = '\n'
    keys[' '] = ' '
    text = deque()
    while True:
        try:
            text.extend([i for i in input()])
            text.append('\n')
        except EOFError:
            break
    while text:
        print(keys[text.popleft()])



if __name__ == '__main__':
    main()

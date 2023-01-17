from collections import deque


def main_func() -> None:
    queue = deque([i for i in 'ABCDEFGHIJKLMNOP'])
    queue_aux = deque()
    for _ in range(15):
        a, b = [int(i) for i in input().split()]
        if not queue:
            queue = deque([i for i in queue_aux])
            queue_aux = deque()
        if a > b:
            queue_aux.append(queue.popleft())
            queue.popleft()
        else:
            queue.popleft()
            queue_aux.append(queue.popleft())
    print(*queue_aux)


if __name__ == '__main__':
    main_func()

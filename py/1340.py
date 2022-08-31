from queue import Queue
from queue import PriorityQueue


def main():
    while True:
        stack = list()
        queue = Queue()
        priority_queue = PriorityQueue()
        is_stack, is_queue, is_priority_queue = True, True, True

        try:
            n = int(input())
        except EOFError:
            break

        for _ in range(n):
            operation, value = [int(i) for i in input().split()]

            if operation == 1:
                stack.append(value)
                queue.put(value)
                priority_queue.put(-value)
            else:
                if value != stack.pop():
                    is_stack = False
                if value != queue.get():
                    is_queue = False
                if -value != priority_queue.get():
                    is_priority_queue = False

        if ((is_stack and is_queue) or
            (is_stack and is_priority_queue) or
            (is_queue and is_priority_queue)):
            print('not sure')
        elif is_stack or is_queue or is_priority_queue:
            if is_stack:
                print('stack')
            elif is_queue:
                print('queue')
            elif is_priority_queue:
                print('priority queue')
        else:
            print('impossible')


if __name__ == '__main__':
    main()
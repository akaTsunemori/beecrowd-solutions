from sys import stdin

def sqroot(number, end):
    if end == 1:
        return number
    else:
        return sqroot(2 + 1/number, end - 1)

repetitions = int(stdin.readline())

if repetitions == 0:
    print(f'{(1.0000000000):.10f}')
else:
    print(f'{(1 + 1/sqroot(2, repetitions)):.10f}')
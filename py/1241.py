n = int(input())

for i in range(n):
    a, b = input().split()

    print('encaixa' if a[-len(b):] == b else 'nao encaixa')
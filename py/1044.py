values = [int(i) for i in input().split()]

if max(values) % min(values) == 0:
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')
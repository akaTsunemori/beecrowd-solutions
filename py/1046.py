times = [int(i) for i in input().split()]

if times[1] <= times[0]:
    times[1] = 24 + times[1]
    
result = times[1] - times[0]
    
print(f'O JOGO DUROU {result} HORA(S)')
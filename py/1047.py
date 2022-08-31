times = list(map(int, input().split()))

if times[2] <= times[0] and times[3] <= times[1]:
    times[2] = 24 + times[2]
    
if times[3] < times[1]:
    times[2] -= 1
    times[3] += 60
    
result = [times[2] - times[0], times[3] - times[1]]
    
print(f'O JOGO DUROU {result[0]} HORA(S) E {result[1]} MINUTO(S)')
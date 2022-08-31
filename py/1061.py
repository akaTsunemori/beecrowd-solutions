days = [i for i in input().split()]
times = [int(i) for i in input().split(' : ')]
days.extend([i for i in input().split()])
times.extend([int(i) for i in input().split(' : ')])
    
days[1] = int(days[1])
days[3] = int(days[3])
    
if times[5] < times[2]:
    times[5] += 60
    times[4] -= 1

if times[4] < times[1]:
    times[4] += 60
    times[3] -= 1

if times[3] < times[0]:
    times[3] += 24
    days[3] -= 1
    
result = [
    days[3] - days[1], 
    times[3] - times[0], 
    times[4] - times[1], 
    times[5] - times[2]
    ]

print(f'{result[0]} dia(s)')
print(f'{result[1]} hora(s)')
print(f'{result[2]} minuto(s)')
print(f'{result[3]} segundo(s)')
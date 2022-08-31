numbers = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

total = 0
result = []
count = int(input())

for i in range(count):
    case = input()
    
    for n in case: total += numbers[int(n)]
        
    result.append(total)
    total = 0
        
for i in result: print(f'{i} leds')
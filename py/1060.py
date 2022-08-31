numbers = [float(input()) for i in range(6)]

count = 0
for i in numbers:
    if i > 0: count += 1
    
print(f'{count} valores positivos')
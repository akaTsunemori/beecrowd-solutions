numbers = [float(input()) for i in range(6)]

positives = []
for i in numbers:
    if i > 0: positives.append(i)
    
print(f'{len(positives)} valores positivos')
print(f'{(sum(positives) / len(positives)):.1f}')
values = [int(input()) for i in range(5)]

count = 0
for i in values:
    if i % 2 == 0:
        count += 1

print(f'{count} valores pares')
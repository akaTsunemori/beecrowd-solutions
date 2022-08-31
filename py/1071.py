n = [int(input()), int(input())]

total = 0
for i in range(min(n) + 1, max(n)):
    if i % 2 != 0: total += i
    
print(total)
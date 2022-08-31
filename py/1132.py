def sumII(n):
    total = 0
    for i in range(min(n), max(n) + 1):
        if i % 13 != 0: total += i
        
    print(total)

sumII([int(input()), int(input())])
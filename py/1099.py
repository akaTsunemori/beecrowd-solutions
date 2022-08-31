def sumII(n):
    total = 0
    for i in range(min(n) + 1, max(n)):
        if i % 2 != 0: total += i
        
    print(total)

n = int(input())
for i in range(n):
    sumII([int(i) for i in input().split()])
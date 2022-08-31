def perfectNumber(n):
    divisors = []
    
    count = 1
    while count != n:
        if n % count == 0:
            divisors.append(count)
        
        count += 1
        
    if sum(divisors) == n:
        print(f'{n} eh perfeito')
        
    else:
        print(f'{n} nao eh perfeito')
        
n = int(input())
for i in range(n):
    perfectNumber(int(input()))
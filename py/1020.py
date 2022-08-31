n = int(input())
y, m = 0, 0

if n >= 365:
    y = n // 365
    n -= y * 365
    
if n >= 30:
    m = n // 30
    n-= m * 30

print(f'{y} ano(s)\n{m} mes(es)\n{n} dia(s)')
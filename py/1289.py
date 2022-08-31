s = int(input())

for i in range(s):
    n, p, i = input().split()
    n, p, i = int(n), float(p), int(i)
    
    if p != 0:
        print(f'{(p * (1 - p) ** (i - 1) / (1 - (1 - p) ** n)):.4f}')
        
    else:
        print(f'0.0000')
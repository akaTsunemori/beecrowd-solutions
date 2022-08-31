n = int(input())

if n % 2 == 0:
    print(*range(n + 1, n + 1 + 12, 2), sep='\n')
    
else:
    print(*range(n, n + 12, 2), sep='\n')
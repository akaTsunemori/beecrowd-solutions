while True:
    n = int(input())
    
    if n == 0:
        break
    
    print(*range(1, n + 1))
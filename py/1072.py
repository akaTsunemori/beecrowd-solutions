n = int(input())

inside = 0
outside = 0

for i in range(n):
    j = int(input())
    
    if 10 <= j and j <= 20:
        inside += 1
        
    else:
        outside += 1
        
print(f'{inside} in\n{outside} out')
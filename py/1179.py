even, odd = [], []
count = 15
while count > 0:
    n = int(input())
    
    if n % 2 == 0:
        even.append(n)
    else:
        odd.append(n)
        
    if len(even) == 5:
        for i in range(len(even)):
            print(f'par[{i}] = {even[i]}')
        
        even = []
        
    if len(odd) == 5:
        for i in range(len(odd)):
            print(f'impar[{i}] = {odd[i]}')
        
        odd = []
        
    count -= 1
    
for i in range(len(odd)):
    print(f'impar[{i}] = {odd[i]}')    

for i in range(len(even)):
    print(f'par[{i}] = {even[i]}')
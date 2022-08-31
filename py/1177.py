T = int(input())
N = []

count = 0
while len(N) < 1000:
    N.append(count)
    count += 1
    
    if count == T:
        count = 0
        
for i in range(len(N)): print(f'N[{i}] =', N[i])
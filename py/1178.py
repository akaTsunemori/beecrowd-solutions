N = [float(input())]

while len(N) < 100: N.append(N[-1] / 2)
    
for i in range(len(N)): print(f'N[{i}] =', '%.4f' % N[i])
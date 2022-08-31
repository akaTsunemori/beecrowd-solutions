def nthFibonacci(index):
    return int((((5 ** (1 / 2) + 1) / 2) ** index -(-(5 ** (1 / 2) + 1) / 2) ** (-index)) / 5 ** (1 / 2))

def nthFibonot(n):
    fibonot = []
    
    i = 5
    while len(fibonot) < n:
        fibonot.extend([i for i in range(nthFibonacci(i - 1) + 1, nthFibonacci(i))])
        
        i += 1
        
    return fibonot[n - 1]
    
print(nthFibonot(int(input())))
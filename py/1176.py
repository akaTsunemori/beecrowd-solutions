from sys import stdin, stdout

def fibo(index): stdout.write(f"Fib({index}) = " + str(int((((5**(1/2) + 1)/ 2)**index - (-(5**(1/2) + 1)/ 2)**-index) / 5**(1/2))) + '\n')

T = int(stdin.readline())

arr = []
count = 0
for line in stdin:
    arr.append(int(line))
    count += 1
    
    if count == T:
        list(map(fibo, arr))
        break
def primeNumber(n):
    for i in range(2, n):
        if n % i == 0:
            print(f'{n} nao eh primo')
            return
            
    print(f'{n} eh primo')

n = int(input())
for i in range(n):
    primeNumber(int(input()))
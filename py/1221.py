def isItPrime(number):
    for i in range(2, int(number ** 0.5) + 1):
        if number % i == 0:
            print('Not Prime')
            return
        
    print('Prime')

n = int(input())

for i in range(n):
    isItPrime(int(input()))
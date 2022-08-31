def evenOrOdd(n):
    if n == 0:
        print('NULL')
    
    else:
        if n % 2 == 0:
            r = 'EVEN'
        else:
            r = 'ODD'
            
        if n < 0:
            print(r, 'NEGATIVE')
        else:
            print(r, 'POSITIVE')
        
n = int(input())
for i in range(n):
    evenOrOdd(int(input()))
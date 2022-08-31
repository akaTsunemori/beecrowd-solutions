fuel = []
while True:
    n = int(input())
    
    if n == 4:
        break
    
    if n >= 1 and n <= 4:
        fuel.append(n)
        
print('MUITO OBRIGADO')
print(f'Alcool: {fuel.count(1)}')
print(f'Gasolina: {fuel.count(2)}')
print(f'Diesel: {fuel.count(3)}')
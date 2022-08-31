salary = float(input())

if salary <=  400:
    print(f'Novo salario: {(salary * 1.15):.2f}')
    print(f'Reajuste ganho: {(salary * 0.15):.2f}')
    print(f'Em percentual: 15 %')
    
elif salary <= 800:
    print(f'Novo salario: {(salary * 1.12):.2f}')
    print(f'Reajuste ganho: {(salary * 0.12):.2f}')
    print(f'Em percentual: 12 %')
    
elif salary <= 1200:
    print(f'Novo salario: {(salary * 1.10):.2f}')
    print(f'Reajuste ganho: {(salary * 0.10):.2f}')
    print(f'Em percentual: 10 %')

elif salary <= 2000:
    print(f'Novo salario: {(salary * 1.07):.2f}')
    print(f'Reajuste ganho: {(salary * 0.07):.2f}')
    print(f'Em percentual: 7 %')
    
else:
    print(f'Novo salario: {(salary * 1.04):.2f}')
    print(f'Reajuste ganho: {(salary * 0.04):.2f}')
    print(f'Em percentual: 4 %')
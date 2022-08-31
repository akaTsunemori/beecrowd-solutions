salary = float(input())

if salary <= 2000:
    print('Isento')
    
elif salary <= 3000:
    salary -= 2000
    salary *= 0.08
    
    print(f'R$ {(salary):.2f}')
    
elif salary <= 4500:
    salary -= 2000
    salary = 0.08 * 1000 + 0.18 * (salary - 1000)
    
    print(f'R$ {(salary):.2f}')
    
else:
    salary -= 2000
    salary = 0.08 * 1000 + 0.18 * 1500 + 0.28 * (salary - 2500)
    
    print(f'R$ {(salary):.2f}')
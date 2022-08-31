ddd = [61, 71, 11, 21, 32, 19, 27, 31]
destination = [
    'Brasilia',
    'Salvador',
    'Sao Paulo',
    'Rio de Janeiro',
    'Juiz de Fora',
    'Campinas',
    'Vitoria',
    'Belo Horizonte'
    ]
    
number = int(input())

if number not in ddd: print('DDD nao cadastrado')
else: print(destination[ddd.index(number)])
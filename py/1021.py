value = float(input())

notes = [100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01]
moneyType = 'nota'

print('NOTAS:')
for note in notes:
    if note == 1:
        print('MOEDAS:')
        moneyType = 'moeda'
    
    count = int((value + 0.001)/note)
    
    print(f'{int(count)} {moneyType}(s) de R$ {note:.2f}')
    
    value -= note * count
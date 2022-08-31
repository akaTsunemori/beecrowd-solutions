scores = []
while True:
    n = float(input())
    
    if n >= 0 and n <= 10:
        scores.append(n)
    
    else:
        print('nota invalida')
        
    if len(scores) == 2:
        print(f'media = {(sum(scores) / len(scores)):.2f}')
        break
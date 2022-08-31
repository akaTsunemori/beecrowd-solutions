def gradesWithValidation():
    grades = []

    a = float(input())
        
    if a < 0 or a > 10:
        print('nota invalida')

    else:
        grades.append(a)

    while True:
        if len(grades) == 2:
            print(f'media = {((grades[0] + grades[1]) / 2):.2f}')
            
            while True:
                popup = int(input('novo calculo (1-sim 2-nao)\n'))
                
                if popup == 2:
                    return
                
                elif popup == 1:
                    grades = [] 
                    break

                else:
                    continue

        a = float(input())
        
        if a < 0 or a > 10:
            print('nota invalida')
            continue

        else:
            grades.append(a)

gradesWithValidation()
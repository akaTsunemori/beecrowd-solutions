numbers = [float(i) for i in input().split()]

average = (numbers[0] * 2 + numbers[1] * 3 + numbers[2] * 4 + numbers[3] * 1) / 10

print(f'Media: {(average):.1f}')

if average >= 7:
    print('Aluno aprovado.')
elif average < 5:
    print('Aluno reprovado.')
else:
    print('Aluno em exame.')
    
    newExam = float(input())
    print(f'Nota do exame: {(newExam):.1f}')
    
    average = (newExam + average) / 2
    
    if average >= 5:
        print('Aluno aprovado.')
    else:
        print('Aluno reprovado.')
        
    print(f'Media final: {(average):.1f}')
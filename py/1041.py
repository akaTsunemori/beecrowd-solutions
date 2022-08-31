point = [float(i) for i in input().split()]

if point[0] == 0 and point[1] == 0: print('Origem')
elif point[0] == 0: print('Eixo Y')
elif point[1] == 0: print('Eixo X')
elif point[0] > 0 and point[1] > 0: print('Q1')
elif point[0] < 0 and point[1] > 0: print('Q2')
elif point[0] < 0 and point[1] < 0: print('Q3')
else: print('Q4')
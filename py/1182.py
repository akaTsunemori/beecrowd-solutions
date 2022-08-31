c = int(input())
ch = input()

matrix = []
count = 144
while count > 0:
    matrix.append(float(input()))
    count -= 1
    
matrix = matrix[c :  : 12]

if ch == 'S':
    print(f'{(sum(matrix)):.1f}')
else:
    print(f'{(sum(matrix) / len(matrix)):.1f}')
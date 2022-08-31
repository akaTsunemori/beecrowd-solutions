l = int(input())
ch = input()

matrix = []
count = 144
while count > 0:
    matrix.append(float(input()))
    count -= 1
    
matrix = matrix[(l * 12): (l * 12) + 12 : 1]

if ch == 'S':
    print(f'{(sum(matrix)):.1f}')
else:
    print(f'{(sum(matrix) / len(matrix)):.1f}')
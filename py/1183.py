operation = input()

matrix = []
c = 0
while True:
    matrix.append(float(input()))
    
    c += 1
    if c == 144: break
    
mainDiagonal = []
index = 1
step = 1
limit = 11
count = 0
while True:
    mainDiagonal.append(matrix[index])
    index += 1
    count += 1
    
    if count == limit:
        count = 0
        step += 1
        index += step
        limit -= 1
    
    if index + step > 143: break

print(format(sum(mainDiagonal), '.1f')) if operation == 'S' else print(format(sum(mainDiagonal) / len(mainDiagonal), '.1f'))
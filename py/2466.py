def sinuca(row, n):
    if n > 1:
        newRow = []
        
        for i in range(len(row) - 1):
            if row[i] + row[i + 1] == 0:
                newRow.append(1)
            
            else:
                newRow.append(-1)
                
        return sinuca(newRow, n - 1)
        
    else:
        return row
    
n = int(input())
row = [int(i) for i in input().split()]

row = sinuca(row, n)

if row[0] == 1:
    print('branca')

else:
    print('preta')
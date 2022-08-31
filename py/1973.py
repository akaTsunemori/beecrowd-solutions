n = int(input())
estrelas = [int(i) for i in input().split()]

i = 0
atacadas = set()

while True:
    if i == n or i < 0 or estrelas[i] == 0:
        break

    atacadas.add(i)
    
    if estrelas[i] % 2 == 0:
        estrelas[i] -= 1     
        i -= 1    
    
    else:
        estrelas[i] -= 1
        i += 1
        
print(len(atacadas), sum(estrelas))
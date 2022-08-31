def startGrid(n, start, finish):
    overtakes = 0
    
    for i in range(n):
        if start[i] != finish[i]:
            overtakes += start.index(finish[i]) - finish.index(finish[i])
            start.remove(finish[i])
            start.insert(i, finish[i])
            
    print(overtakes)

while True:  
    try:
        n = int(input())
        start = [int(i) for i in input().split()]
        finish = [int(i) for i in input().split()]
        
        startGrid(n, start, finish)
        
    except:
        break
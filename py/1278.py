def justifier(sentences):
    sentences = [i.split() for i in sentences]
    sentences = [' '.join(i) for i in sentences]
    
    length = 0
    for i in sentences:
        if len(i) > length:
            length = len(i)
    
    for i in sentences:
        if len(i) < length:
            spaces = length - len(i)
            print(' ' * spaces + i)
        
        else:
            print(i)

n = int(input())
w = [input() for i in range(n)]
justifier(w)
    
while True:
    n = int(input())
    if n == 0: break
    
    print('')
    
    w = [input() for i in range(n)]
    justifier(w)
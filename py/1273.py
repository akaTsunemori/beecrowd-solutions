def justifier(words):
    length = max(len(words[0]), len(words[1]), len(words[2]))
    
    for i in words:
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
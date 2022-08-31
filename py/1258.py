def tshirts(n):
    for key in n:
        n[key].sort()
        
        for element in n[key]:
            print(key, element)

n = int(input())
while True:
    uniforms = {
        'branco P': [],
        'branco M': [],
        'branco G': [],
        
        'vermelho P': [],
        'vermelho M': [],
        'vermelho G': [],
    }
    
    while n > 0:
        ps = (input(), input())
        uniforms[ps[1]].append(ps[0])
        
        n -= 1
        
    tshirts(uniforms)

    n = int(input())
    
    if n != 0:
        print('')
    else:
        break
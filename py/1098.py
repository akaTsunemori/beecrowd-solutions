i = 0
j = 10

while i <= 20:
    print(f'I={(i / 10):.2g} J={(j  / 10):.2g}\nI={(i / 10):.2g} J={(j  / 10 + 1):.2g}\nI={(i / 10):.2g} J={(j  / 10 + 2):.2g}')
    
    i += 2
    j += 2
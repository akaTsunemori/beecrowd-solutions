check = False
while True:
    try:
        n = int(input())
        
        if check == True:
            print('')
        
        a = 0
        b = 0
        c = 0
        
        if n % 15 == 0:
            b = 'This is huluculu festival year.'
        
        if (n % 4 == 0 and n % 100 != 0) or n % 400 == 0:
            a = 'This is leap year.'
            
            if n % 55 == 0:
                c = 'This is bulukulu festival year.'
        
        if a == 0 and b == 0 and c == 0:
            print('This is an ordinary year.')
            
        else:
            if a != 0:
                print(a)
                
            if b != 0:
                print(b)
                
            if c != 0:
                print(c)
                
        check = True
            
    except EOFError:
        break
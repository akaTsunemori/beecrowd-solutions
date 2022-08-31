s = [int(i) for i in input().split()]

if (3 * s[0] + s[1] + s[2]) == (3 * s[3] + s[4] + s[5]):
    print('=')

elif (3 * s[0] + s[1]) > (3 * s[3] + s[4]):
    print('C')
    
elif (3 * s[0] + s[1]) < (3 * s[3] + s[4]):
    print('F')
    
elif (3 * s[0] + s[1] + s[2]) > (3 * s[3] + s[4] + s[5]):
    print('C')
    
else:
    print('F')
credits = [int(i) for i in input().split()]

count = 0
while True:
    if credits[0] + credits[1] == credits[2] or credits[0] == credits[1] or abs(credits[0] - credits[1]) == credits[2]:
        print('S')
        break
    
    elif count == 3:
        print('N')
        break
    
    count += 1
    credits = credits[1:] + credits[:1]
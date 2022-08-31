while True:
    poem = input()
    
    if poem == '*': break
    
    ch = poem[0]
    ch = [ch.upper(), ch.lower()]
    
    poem = poem.split()
    
    status = 'Y'
    for word in poem:
        if word[0] not in ch:
            status = 'N'
            
    print(status)
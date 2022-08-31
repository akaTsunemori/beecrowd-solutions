while True:
    try:
        hashmat, opponent = map(int, input().split())
        print(abs(hashmat - opponent))
        
    except EOFError:
        break
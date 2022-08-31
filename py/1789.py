def snails():
    input()
    m = max([int(i) for i in input().split()])

    if m < 10:
        print(1)
    
    elif m < 20:
        print(2)

    else:
        print(3)


while True:
    try:
        snails()

    except EOFError:
        break
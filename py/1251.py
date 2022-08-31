def getfreq(s):
    
    arr = [0 for _ in range(256)]
    

    for i in s:
        arr[ord(i)] += 1

    res = [(arr[i], i) for i in range(256) if arr[i] > 0]
    res.sort(reverse=True)
    res.sort(key=lambda a: a[0])

    for i, j in res:
        print(j, i)


f = False

while True:
    try:
        string = input()

        if f:
            print('')

        getfreq(string)
        f = True

    except EOFError:
        break
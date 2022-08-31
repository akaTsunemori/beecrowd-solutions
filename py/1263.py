while True:
    try:
        sentence = input()
        sentence = sentence.lower().split()
        current = sentence[0][0]
        count = 0
        result = list()
        
        for word in sentence[1:]:
            if word[0] == current:
                count += 1

            else:
                count = 0
    
            if count == 1:
                result.append(word[0])

            current = word[0]

        print(len(result))

    except EOFError:
        break
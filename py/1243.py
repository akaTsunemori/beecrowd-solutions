while True:
    try:
        sentence = input().split()
        words = ''
        amount = 0

        for word in sentence:
            if word[-1] == '.':
                word = word[:-1]

            if word.isalpha():
                words += word
                amount += 1

        if amount == 0:
            amount = 1

        average = len(words) // amount

        if average <= 3:
            print(250)

        elif average <= 5:
            print(500)

        else:
            print(1000)

    except EOFError:
        break
def is_alpha(c):
    i = ord(c)

    if (65 <= i <= 90) or (97 <= i <= 122):
        return True

    return False


def andy():
    dic = set()

    while True:
        try:
            line = input()
            word = ''

            for i in line:
                if is_alpha(i):
                    word += i.lower()

                elif len(word) > 0:
                    dic.add(word)
                    word = ''

                else:
                    word = ''

            if len(word) > 0:
                dic.add(word)
                word = ''

        except EOFError:
            print(*sorted(dic), sep='\n')
            break


andy()
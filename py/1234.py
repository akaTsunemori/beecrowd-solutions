def dancing(sentence):
        result = ''
        
        count = 0
        for i in sentence:
            if count % 2 == 0 and i != ' ':
                i = i.upper()
                result += i
                count += 1
                
            else:
                i = i.lower()
                result += i
                if i != ' ': count += 1
                
        print(result)

while True:
    try: dancing(input())
    except EOFError: break
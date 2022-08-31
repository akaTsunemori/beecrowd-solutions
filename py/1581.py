def internationalChat(languages):
    for i in languages:
        if i != languages[0]:
            print('ingles')
            return None
        
    print(languages[0])

n = int(input())
for i in range(n):
    k = int(input())
    internationalChat([input() for i in range(k)])
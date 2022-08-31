n = int(input())
while n > 0:
    alphabet = [0 for i in range(26)]
    sentence = input().lower()
    
    for i in sentence:
        if i in 'abcdefghijklmnopqrstuvwxyz':
            alphabet[ord(i) - 97] += 1
            
    maximum = max(alphabet)
    mostFrequent = []
    
    for i in range(len(alphabet)):
        if alphabet[i] == maximum:
            mostFrequent.append(chr(i + 97))

    print(*mostFrequent, sep='')
    
    n -= 1
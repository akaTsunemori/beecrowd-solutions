def hamekameka(word):
    total = 0
    for i in range(len(word)):
        if word[i] == 'a':
            total += 1
        
    firstSyllabe = 0
    for i in range(len(word)):
        if word[i] == 'a':
            firstSyllabe += 1
            
        if word[i + 1] != 'a':
            break
        
    print('k' + (firstSyllabe * (total - firstSyllabe)) * 'a')

n = int(input())
for i in range(n):
    hamekameka(input())
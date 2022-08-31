testCases = []
count = int(input())
for i in range(count):
    testCases.append(list(input()))
 
def encryption(word):
    for index, char in enumerate(word):
        n = ord(char)
        if (n >= 65 and n <= 90) or (n >= 97 and n <= 122):
            word[index] = chr(ord(word[index]) + 3)

    word = word[::-1]
            
    for index, char in enumerate(word):
        if index >= len(word) // 2:
            word[index] = chr(ord(word[index]) - 1)
            
    return word
    
for i in testCases: print(*encryption(i), sep='')
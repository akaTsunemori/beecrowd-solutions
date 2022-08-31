def caesarCipher(word, shift):
    alphabet = list('A B C D E F G H I J K L M N O P Q R S T U V W X Y Z'.split())
    
    indexes = ''
    for letter in word:
        indexes += str(alphabet.index(letter) - shift) + ' '
        
    indexes = [int(i) for i in indexes.split()]
    
    decoded = ''
    for i in indexes:
        decoded += alphabet[i]
        
    return decoded

words = []
shifts = []
count = int(input())
while count > 0:
    words.append(input())
    shifts.append(int(input()))
    
    count -= 1
    
for i in range(len(words)):
    print(caesarCipher(words[i], shifts[i]))
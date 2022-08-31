def obiuri(word):
    word = [i for i in word]
    
    if len(word) == 3 and ((word[0] + word[1]) == 'OB' or (word[0] + word[1]) == 'UR'):
        word[2] = 'I'
        
    result = ''
    return result.join(word)

input()
cases = input().split()

print(*list(map(obiuri, cases)), sep=' ')
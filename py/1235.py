def insideOut(sentence):
    result = ''
    
    result += sentence[(len(sentence) // 2) - 1 : : -1]
    
    tmp = sentence[(len(sentence) // 2) :  : 1]
    tmp = tmp[::-1]
    
    result += tmp
    
    print(result)

n = int(input())
for i in range(n): insideOut(input())
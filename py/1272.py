def hiddenMessage(text):
    result = ''
    text = text.split()
    
    for i in text:
        result += i[0]
            
    print(result)

n = int(input())
for i in range(n):
    a = input()
    hiddenMessage(a)
def combiner(sentence):
    sentence = sentence.split()
    
    result = ''
    
    count = 0
    while count < min(len(sentence[0]), len(sentence[1])):
        result += sentence[0][count] + sentence[1][count]
        count += 1
    
    if len(sentence[0]) > len(sentence[1]): remainder = sentence[0]
    else: remainder = sentence[1]
    
    result += remainder[count::]
    
    print(result)

n = int(input())
for i in range(n):
    combiner(input())
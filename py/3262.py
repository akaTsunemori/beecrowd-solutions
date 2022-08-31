digits = (('**** ** ** ****'), ('  *  *  *  *  *'), ('***  *****  ***'), ('***  ****  ****'), ('* ** ****  *  *'), ('****  ***  ****'), 
('****  **** ****'), ('***  *  *  *  *'), ('**** ***** ****'), ('**** ****  ****'))

total = []  
for _ in range(5):
    number = input()

    for i in range(0, len(number), 4):
        total.append(number[i : i + 3])

step = len(total) // 5
flag = False
result = ''
for i in range(0, len(total) // 5):
    number = ''.join(total[i::step])

    if number in digits:
        number = digits.index(number)
        result += str(number)

    else:
        flag = True
        break

if not flag:
    if int(result) % 6 == 0:
        print('BEER!!')

    else:
        print('BOOM!!')

else:
    print('BOOM!!')
def sSequence(number, denominator):
    if denominator > 100:
        return number
    else:
        return sSequence(number + 1/denominator, denominator + 1)
    
print(f'{(sSequence(1, 2)):.2f}')
huehue = input()

for i in huehue:
    if i not in 'aeiou':
        huehue = huehue.replace(i, '')

if huehue[::-1] == huehue: print('S')
else: print('N')
def main():
    morse_dict = {
        '=.===':'a',
        '===.=.=.=':'b',
        '===.=.===.=':'c',
        '===.=.=':'d',
        '=':'e',
        '=.=.===.=':'f',
        '===.===.=':'g',
        '=.=.=.=':'h',
        '=.=':'i',
        '=.===.===.===':'j',
        '===.=.===':'k',
        '=.===.=.=':'l',
        '===.===':'m',
        '===.=':'n',
        '===.===.===':'o',
        '=.===.===.=':'p',
        '===.===.=.===':'q',
        '=.===.=':'r',
        '=.=.=':'s',
        '===':'t',
        '=.=.===':'u',
        '=.=.=.===':'v',
        '=.===.===':'w',
        '===.=.=.===':'x',
        '===.=.===.===':'y',
        '===.===.=.=':'z'
    }

    n = int(input())

    for _ in range(n):
        morse_code = [i.split('...') for i in input().split('.......')]
        result = []

        for word in morse_code:
            for letter in word:
                result.append(morse_dict[letter])

            result.append(' ')

        result.pop(-1)
        print(*result, sep='')


main()
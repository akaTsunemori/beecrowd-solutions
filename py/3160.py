def main():
    friends = input().split()
    new_friends = input().split()
    operation = input()
    result = []

    if operation == 'nao':
        print(*friends, *new_friends)
    
    else:
        for i in friends:
            if i == operation:
                result.extend(new_friends)

            result.append(i)

        print(*result)


main()
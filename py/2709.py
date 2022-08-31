while True:
    try:
        n, coins = int(input()), list()

        for _ in range(n):
            coins.append(int(input()))

        coins = coins[::-1]
        step = int(input())
        result = sum(coins[::step])
        flag = True

        if result in (1, 2):
            result += 1

        for number in range(2, int(result ** 0.5) + 2):
            if result % number == 0:
                flag = False
                print("Bad boy! I’ll hit you.")
                break

        if flag:
            print("You’re a coastal aircraft, Robbie, a large silver aircraft.")

    except EOFError:
        break
for _ in range(int(input())):
    n = int(input())
    alice, bob = 0, 0
    rang = 1
    while n > 0:
        if (rang >= n):
            alice += (n)
            break
        else:
            alice += rang
            n -= rang
        rang += 4
        if rang >= n:
            bob += (n)
            break
        else:
            bob += rang
            n -= rang
        rang += 4
    print(alice, bob)

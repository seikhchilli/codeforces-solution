for _ in range(int(input())):
    cards = int(input())
    a1, a2, b1, b2 = 0, 0, 0, 0
    subcards = 1
    cnt = 0
    while cards > 0:
        if (subcards >= cards):
            cnt += cards
            if (cards % 2 == 0):
                a1, a2 = a1+(cards//2), a2+(cards//2)
            else:
                if cnt % 2 == 0:
                    a1, a2 = a1+(cards//2), a2+(cards//2)+1
                else:
                    a1, a2 = a1+(cards//2)+1, a2+(cards//2)
            break
        else:
            cnt += subcards

            if (subcards % 2 == 0):
                a1, a2 = a1+(subcards//2), a2+(subcards//2)
            else:
                if cnt % 2 == 0:
                    a1, a2 = a1+(subcards//2), a2+(subcards//2)+1
                else:
                    a1, a2 = a1+(subcards//2)+1, a2+(subcards//2)

        cards -= subcards
        subcards += 4
        if (subcards >= cards):
            cnt += cards
            if (cards % 2 == 0):
                b1, b2 = b1+(cards//2), b2+(cards//2)
            else:
                if cnt % 2 == 0:
                    b1, b2 = b1+(cards//2), b2+(cards//2)+1
                else:
                    b1, b2 = b1+(cards//2)+1, b2+(cards//2)
            break
        else:
            cnt += subcards
            if (subcards % 2 == 0):
                b1, b2 = b1+(subcards//2), b2+(subcards//2)
            else:
                if cnt % 2 == 0:
                    b1, b2 = b1+(subcards//2), b2+(subcards//2)+1
                else:
                    b1, b2 = b1+(subcards//2)+1, b2+(subcards//2)

        cards -= subcards
        subcards += 4

    print(a1, a2, b1, b2)

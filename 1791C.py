for _ in range(int(input())):
    n = int(input())
    s = input()
    f, l = 0, len(s)-1
    cnt = 0
    while f < l:
        if s[f] != s[l]:
            f += 1
            l -= 1
            cnt += 2
        else:
            break
    print(len(s)-cnt)

for _ in range(int(input())):
    n = int(input())
    s = input()
    dic = {'U': (0, 1), 'R': (1, 0), 'D': (0, -1), 'L': (-1, 0)}
    r, c = 0, 0
    status = True
    for ch in s:
        r += dic[ch][0]
        c += dic[ch][1]
        if r == 1 and c == 1:
            print("YES")
            status = False
            break
    if status:
        print("NO")

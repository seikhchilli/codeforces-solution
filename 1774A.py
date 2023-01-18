t = int(input())

while t > 0:
    n = int(input())
    s = input()
    ans = ""
    ind = 0
    sign = '+'
    for i in range(n-1):
        if sign == '+':
            ind += int(s[i])
        else:
            ind -= int(s[i])

        if ind == 1:
            sign = '-'
        else:
            sign = '+'
        ans += sign

    print(ans)

    t -= 1

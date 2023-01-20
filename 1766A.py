t = int(input())

while t > 0:
    n = input()
    l = len(n)
    ans = 0
    ans += int(n[0])
    l -= 1
    ans += 9 * l
    print(ans)
    t -= 1

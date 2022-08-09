t = int(input())

while(t > 0):
    t -= 1
    s = input()
    n = len(s)
    if n % 2 != 0:
        print("NO")
        continue
    elif s[:n//2] == s[n//2:]:
        print("YES")
    else:
        print("NO")

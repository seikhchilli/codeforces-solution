for _ in range(int(input())):
    s = input()
    pi = "314159265358979323846264338327"

    n = len(s)
    cnt = 0
    for i in range(min(n,30)):
        if s[i]!=pi[i]:
            break
        cnt+=1
    print(cnt)
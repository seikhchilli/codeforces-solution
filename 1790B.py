for _ in range(int(input())):
    n,s,r = map(int,input().split())
    res = []
    div,m = (r)//(n-1) , r%(n-1)
    if m==0:
        for i in range(n-1):
            res.append(div)
    else:
        for i in range(m):
            res.append(div+1)
        for i in range(n-1-m):
            res.append(div)
    res.append(s-r)
    print(*res)
    
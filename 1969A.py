t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    
    out = 3
    for i in range(1, n+1):
        if p[p[i-1]-1]==i:
            out=2
            break
        
    outs.append(out)


for out in outs:
    print(out)
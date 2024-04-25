t = int(input())
outs = []

for tt in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    a.sort()
    if a[0]!=a[1]:
        out = 'YES'
    else:
        if n==2:
            out = 'NO'
        else:
            out = False
            for aa in a[2:]:
                if aa%a[0]!=0:
                    out = True
                    break
            out = 'YES' if out else 'NO'
    outs.append(out)
    
for out in outs:
    print(out)
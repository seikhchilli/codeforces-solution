t = int(input())
outs = []
 
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    e = {}
    for aa in a:
        if aa in e.keys():
            e[aa]+=1
        else:
            e[aa]=1
            
    tot = 0
    for k, v in e.items():
        tot += v//3
 
    out = [tot]
    outs.append(out)
    
    
for out in outs:
    print(*out)
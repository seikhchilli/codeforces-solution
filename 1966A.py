t = int(input())
outs = []


for tt in range(t):
    n, k = map(int, input().split())
    c = list(map(int, input().split()))
    
    pos = False
    counts = {}
    for cc in c:
        if cc in counts.keys():
            counts[cc]+=1
        else:
            counts[cc]=1
            
        if counts[cc]>=k:
            pos=True
            
    out = k-1 if pos else n
    outs.append(out)
    
    
for out in outs:
    print(out)
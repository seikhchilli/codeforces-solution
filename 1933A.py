t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    tot = 0
    for aa in a:
        tot+=abs(aa)
        
    outs.append(tot)
    
for out in outs:
    print(out)
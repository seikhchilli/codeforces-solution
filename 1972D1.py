t = int(input())
outs = []


for tt in range(t):
    n, m = map(int, input().split())
    
    tot = 0
    
    for b in range(1, m+1):
        tot+=(n+b)//b**2
        
    outs.append(tot-1)
    
    
for out in outs:
    print(out)
    
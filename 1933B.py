t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    rems = {0:0, 1:0, 2:0}
    tot = 0
    for aa in a:
        tot+=aa
        rems[aa%3]+=1
        
    if tot%3==0:
        out = 0
    elif tot%3==1:
        if rems[1]>0:
            out = 1
        else:
            out = 2
    else:
        out = 1
        
    outs.append(out)
    
for out in outs:
    print(out)
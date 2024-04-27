t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    last = a[-1]
    
    pos = True
    for aa in a[:-1][::-1]:
        
        if aa>last:
            if aa>=10 and aa//10<=aa%10 and aa%10<=last:
                last = aa//10
            else:
                pos = False
                break
        else:
            last = aa
                
    out = 'YES' if pos else 'NO'
    outs.append(out)
    
    
for out in outs:
    print(out)
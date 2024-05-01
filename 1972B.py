t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    s = input()
    
    sum_=0
    for ss in s:
        sum_ = sum_ ^ (int(ss=='U'))
        
    out = 'YES' if sum_!=0 else 'NO'
            
    outs.append(out)


for out in outs:
    print(out)
    
t = int(input())
outs = []


for tt in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    a.sort()
    min_, min_idx = a[0], 0
    
    for i in range(1, n):
        trg = i*(a[i]-min_)
        if k>=trg:
            k-=trg
            min_ = a[i]
            min_idx = i
        else:
            min_ += k//i
            min_idx = i-1
            k = k%i
            break
        
    if min_idx==n-1 and k>0:
        min_ += k//n
        k = k%n
        
    tot = min_ + (min_-1)*(n-1) + (n-1-min_idx) + k
        
    outs.append(tot)


for out in outs:
    print(out)
    
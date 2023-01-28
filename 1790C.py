for _ in range(int(input())):
    n = int(input())
    elements = []
    for i in range(n):
        elements.append(list(map(int,input().split())))
    tsum,csum = (n*(n+1))//2,0 
    for val in elements[0]: csum+=val
    missing = tsum-csum 
    myset = set()
    for i in range(1,n):
        prev = None
        for val in elements[i]:
            if val==missing: break
            prev = val 
        if prev:
            myset.add(prev)
    
    if len(myset)==0:
        print(missing, *elements[0])
    else:
        res = elements[0]
        for i in range(n-2,-1,-1):
            if elements[0][i] in myset:
                
                res.insert(i+1,missing)
                print(*res)
                break 


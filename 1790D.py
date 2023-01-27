for _ in range(int(input())):
    n = int(input())
    elements = list(map(int,input().split()))

    myset = set()
    dic = {}
    
    for val in elements:
        
        myset.add(val)
        dic[val] = dic.get(val,0)+1
    
    isVisited = set()
    def solve(n):
        cnt = 0
        range = 0
        while n in myset:
            isVisited.add(n)
            if dic[n]>=range:
                cnt += abs(dic[n]-range)
            range = dic[n]
            n+=1
        return cnt
    
    res = 0    
    for val in sorted(elements):
        if val not in isVisited:
            res+=solve(val)
    print(res)
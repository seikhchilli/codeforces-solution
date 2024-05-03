t = int(input())
outs = []


for tt in range(t):
    n, m = map(int, input().split())
    a = [None]*n
    for i in range(n):
        r = input()
        a[i] = r
    
    b = {'x':{}, 'y':{}}
    w = {'x':{}, 'y':{}}
    
    b['x']['min'], b['x']['max'] = 550, -1
    b['y']['min'], b['y']['max'] = 550, -1
    w['x']['min'], w['x']['max'] = 550, -1
    w['y']['min'], w['y']['max'] = 550, -1
    
    pos = False
    for i in range(n):
        for j in range(m):
            if a[i][j]=='B':
                b['x']['min']=min(b['x']['min'], i)
                b['x']['max']=max(b['x']['max'], i)
                b['y']['min']=min(b['y']['min'], j)
                b['y']['max']=max(b['y']['max'], j)
            else:
                w['x']['min']=min(w['x']['min'], i)
                w['x']['max']=max(w['x']['max'], i)
                w['y']['min']=min(w['y']['min'], j)
                w['y']['max']=max(w['y']['max'], j)
                
            if b['x']['min']==0 and b['x']['max']==n-1 and b['y']['min']==0 and b['y']['max']==m-1:
                pos = True
                break
            elif w['x']['min']==0 and w['x']['max']==n-1 and w['y']['min']==0 and w['y']['max']==m-1:
                pos = True
                break
            
    out = 'YES' if pos else 'NO'
    outs.append(out)
    
    
for out in outs:
    print(out)

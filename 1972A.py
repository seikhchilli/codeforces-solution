t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    tot = 0
    a_i, b_i = 0, 0
    
    while b_i<n:
        if a[a_i]>b[b_i]:
            tot+=1
            b_i+=1
        else:
            a_i+=1
            b_i+=1
            
    outs.append(tot)


for out in outs:
    print(out)
    
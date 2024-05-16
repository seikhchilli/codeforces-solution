t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    x = list(map(int, input().split()))
    
    a = [0]*n
    
    a[0] = x[0]+1
    for i in range(1, n-1):
        if a[i-1]>x[i-1] and x[i-1]!=1 and x[i-1]>x[i]:
            a[i]=x[i-1]
        else:
            mul = x[i]//a[i-1]
            if a[i-1]*mul + x[i-1]>x[i]:
                a[i] = mul*a[i-1]+x[i-1]
            else:
                a[i] = (mul+1)*a[i-1]+x[i-1]
            
    a[-1] = x[-1]
            
    outs.append(a)

for out in outs:
    print(*out)

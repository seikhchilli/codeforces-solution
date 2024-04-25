import math

t = int(input())
outs = []


for tt in range(t):
    a, b, l = map(int, input().split())
    
    x_m = math.ceil(math.log(l)/math.log(a))
    y_m = math.ceil(math.log(l)/math.log(b))
    
    ks = set()
    for x in range(x_m+1):
        for y in range(y_m+1):
            k = l/(a**x)/(b**y)
            if k>0 and math.floor(k)==math.ceil(k):
                ks.add(math.floor(k))
                
    outs.append(len(ks))
    
for out in outs:
    print(out)
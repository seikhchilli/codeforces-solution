t = int(input())
outs = []
 
 
for _ in range(t):
    n, k = map(int, input().split())
    
    out = [0]*n
    
    bits = k.bit_length()
    num = 2**(bits-1)-1
    out[0] = num
    
    rem = k-num
    if n==1:
        out[0]+=rem
    else:
        out[1] = rem
    
    outs.append(out)
    
    
for out in outs:
    print(*out)
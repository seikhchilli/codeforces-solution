t = int(input())
outs = []


for tt in range(t):
    s = input()
    n = len(s)
    
    lst = -1
    for i in range(n):
        if s[i]=='0':
            lst=i
        else:
            break
        
    tot = 0
    for i in range(lst+1, n):
        if s[i]=='0':
            tot+=i-lst
            lst+=1
        
    outs.append(tot)


for out in outs:
    print(out)
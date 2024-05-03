t = int(input())
outs = []


for tt in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    a = [0] + sorted(list(set(a)))
    
    win = True
    for i in range(len(a)-3, -1, -1):
        if a[i+1]-a[i]==1:
            win = not win
        else:
            win = True

    out = 'Alice' if win else 'Bob'
    outs.append(out)
    
    
for out in outs:
    print(out)
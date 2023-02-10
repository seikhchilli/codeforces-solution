

for _ in range(int(input())):
    num = int(input())
    status = True
    a, b = 0, 0
    elements = list(map(int, str(num).strip()))
    for val in elements:
        if val % 2 == 0:
            a = a*10+val//2
            b = b*10+val//2
        else:
            if status:
                a = a*10+(val//2)+1
                b = b*10+(val//2)
                status = False
            else:
                a = a*10+(val//2)
                b = b*10+(val//2)+1
                status = True
    print(a, b)

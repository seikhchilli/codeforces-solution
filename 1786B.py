for _ in range(int(input())):
    n, w, h = map(int, input().split())
    cakes = list(map(int, input().split()))
    dispenser = list(map(int, input().split()))

    status = True
    a, b = float('-inf'), float('inf')
    for i in range(n):
        a = max(a, cakes[i]-w+h-dispenser[i])
        b = min(b, cakes[i]-dispenser[i]+w-h)
        # print(a, b)
        if a > b:
            print("NO")
            status = False
            break

    if status:
        print("YES")

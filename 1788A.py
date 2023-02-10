for _ in range(int(input())):
    n = int(input())
    elements = list(map(int, input().split()))
    suffix = [0]*(n)
    suffix[-1] = elements[-1]
    for i in range(n-2, -1, -1):
        suffix[i] = suffix[i+1]*elements[i]
    curr = 1
    status = True
    for i in range(n-1):
        curr *= elements[i]
        if curr == suffix[i+1]:
            print(i+1)
            status = False
            break
    if status:
        print(-1)

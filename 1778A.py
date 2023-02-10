for _ in range(int(input())):
    n = int(input())
    elements = list(map(int, input().split()))
    status, status2 = False, False
    if elements[n-1] == -1:
        status2 = True
    for i in range(n-2, -1, -1):
        if elements[i] == -1:
            status2 = True
        if (elements[i] == -1 and elements[i+1] == -1):
            elements[i] = 1
            elements[i+1] = 1
            stauts = True
            break
    if status:
        print(sum(elements))
    else:
        if status2:
            print(sum(elements))
        else:
            print(sum(elements)-4)

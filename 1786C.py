for _ in range(int(input())):
    n = int(input())
    elements = list(map(int, input().split()))
    elements.sort()
    res = 0
    cnt = 1
    prev = None
    for i in range(n):
        if cnt > elements[i]:
            continue
        res += (elements[i]-cnt)
        cnt += 1

    print(res)

for _ in range(int(input())):
    n = int(input())
    elements = list(map(int, input().split()))
    cursum = 0
    cnt = 0
    minval = float('inf')
    for val in elements:
        if val < 0:
            cnt += 1
        cursum += (abs(val))
        minval = min(minval, abs(val))

    if cnt % 2 != 0:
        cursum -= (2*minval)
    print(cursum)

n, t = map(int, input().split())


def solve(r, t, n):
    frontier = [t]
    count = 0
    while r < n:
        nxt = [0] * (r+1)
        for i in range(len(frontier)):
            if frontier[i] >= 1:
                count += 1
                extra = (frontier[i] - 1)/2
                nxt[i] += extra
                nxt[i+1] += extra
        frontier = nxt
        r += 1
    for i in frontier:
        if i >= 1:
            count += 1


    return count


print(solve(1, t, n))

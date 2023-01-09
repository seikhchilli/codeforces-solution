i, n = map(int, input().split())

check = False
def solve(i, n, p):
    global check
    if i == n:
        check = True
        print("YES")
        print(len(p))
        print(*p)
        return
    if(i < n):
        solve(2*i, n, p + [2*i])
        solve(10*i + 1, n, p + [10*i+1])

#backtracking


solve(i, n, [i])
if not check:
    print("NO")

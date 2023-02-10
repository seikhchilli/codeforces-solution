for _ in range(int(input())):
    n = int(input())
    s = input()
    first = [1]*(n)
    second = [1]*(n)
    myset = {s[0]}
    for i in range(1, n):
        if s[i] in myset:
            first[i] = first[i-1]
        else:
            myset.add(s[i])
            first[i] += first[i-1]

    myset = {s[-1]}
    for i in range(n-2, -1, -1):
        if s[i] in myset:
            second[i] = second[i+1]
        else:
            myset.add(s[i])
            second[i] += second[i+1]

    # print(first, second)
    res = 1
    for i in range(n-1):
        res = max(res, first[i]+second[i+1])
    print(res)

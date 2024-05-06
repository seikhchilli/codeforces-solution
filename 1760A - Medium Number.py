t = int(input())

for _ in range(t):
    arr = list(map(int, input().split()))
    max_num = max(arr)
    min_num = min(arr)
    for num in arr:
        if num != max_num and num != min_num:
            print(num)

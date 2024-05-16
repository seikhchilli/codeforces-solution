def maximum_increase(n, arr):
    max_length = 1
    current_length = 1
    
    for i in range(1, n):
        if arr[i] > arr[i - 1]:
            current_length += 1
            max_length = max(max_length, current_length)
        else:
            current_length = 1
    
    return max_length

# Input
n = int(input())
arr = list(map(int, input().split()))

# Output
print(maximum_increase(n, arr))

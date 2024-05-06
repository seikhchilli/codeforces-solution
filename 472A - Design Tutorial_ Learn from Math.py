def is_composite(num):
    if num < 4:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return True
    return False

def find_composite_pair(n):
    for i in range(4, n):
        if is_composite(i) and is_composite(n - i):
            return i, n - i

# Input
n = int(input())

# Output
x, y = find_composite_pair(n)
print(x, y)

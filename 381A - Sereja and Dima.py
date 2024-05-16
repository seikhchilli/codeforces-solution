n = int(input())
arr = list(map(int, input().split()))

point1 = 0
point2 = 0

left = 0
right = n - 1

sereja_turn = True

while left <= right:
    if sereja_turn:
        point1 += max(arr[left], arr[right])
        if arr[left] > arr[right]:
            left += 1
        else:
            right -= 1
    else:
        point2 += max(arr[left], arr[right])
        if arr[left] > arr[right]:
            left += 1
        else:
            right -= 1

    sereja_turn = not sereja_turn

print(point1, point2)

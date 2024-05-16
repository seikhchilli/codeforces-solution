t = int(input())  # number of test cases

for _ in range(t):
    n = int(input())  # length of the array
    arr = list(map(int, input().split()))  # elements of the array
    
    if len(set(arr)) == n:
        print("YES")
    else:
        print("NO")

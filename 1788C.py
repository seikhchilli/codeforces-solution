for _ in range(int(input())):
    n = int(input())

    if n == 1:
        print("Yes")
        print(1, 2)
        continue

    if n % 2 == 0:
        print("No")
        continue
    print("Yes")
    arr = [i for i in range(1, (2*n)+1)]
    n *= 2
    i = (n//2)//2-1
    j = n//2+1

    if i >= 0:
        for k in range((n//2)//2):
            print(arr[i], arr[j])
            i -= 1
            j += 2
    j = n//2
    i = (n//2)-1
    # print(((n//2)//2)+1)

    for k in range(((n//2)//2)+1):
        print(arr[i], arr[j])
        i -= 1
        j += 2

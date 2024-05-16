t= int(input())
for _ in range(t):
    s= input()
    count_a=s.count('A')
    count_b=s.count('B')
    if count_a < count_b:
        print('B')
    else:
        print('A')
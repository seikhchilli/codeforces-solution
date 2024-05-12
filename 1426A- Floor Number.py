t= int(intput())
for _ in range(t):
    n,x = map(int , input.spilt())
    floor =1
    apartment_count=2
    while n> apartment_count:
        apartment_count += x
        floor += 1
    print(floor)

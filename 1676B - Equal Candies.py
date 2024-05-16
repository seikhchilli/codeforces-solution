t= int(intput())
for _ in range(t):
    n = int(intput())
    candies= list(map(int,input().split()))
    min_candies= min(candies)
    candies_to_eat= [c- min_candies for c in candies]
    total_candies_to_eat= sum(candies_to_eat)
    print(total_candies_to_eat)

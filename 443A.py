s = input()
if len(s[1:-1]) == 0:
    print(0)
else:
    print(len(set(s[1:-1].split(', '))))

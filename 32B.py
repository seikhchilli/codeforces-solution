s = input()
result = ""
i = 0
while i < len(s):
    if s[i] == ".":
        result += '0'
    else:
        i += 1
        if s[i] == ".":
            result += '1'
        else:
            result += '2'
    i += 1

print(result)
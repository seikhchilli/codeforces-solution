txt = input()
txtsplit = txt.split("WUB")
txtnew = ''
for i in txtsplit:
    if i == '':
        continue
    txtnew += (i + ' ')
print(txtnew)
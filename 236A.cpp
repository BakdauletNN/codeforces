mes = 'sevenkplus'
let = dict()
count = 0
res = []
for i in mes:
    if i not in let:
        let[i] = count
print(let)

for i in let.keys():
    if let[i] == 0:
        res.append(i)
print('CHAT WITH HER!' if len(res) % 2 == 0 else 'IGNORE HIM!')
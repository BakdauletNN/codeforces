n = int(input())
count = 0
idx = 0
colors = input().split()
for i in range(1,n):
    if colors[0][idx] == colors[0][i]:
        count += 1
    idx += 1
print(count)

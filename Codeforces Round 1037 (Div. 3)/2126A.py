t = int(input())
for _ in range(t):
    x = input().strip()
    digits_x = set(x)
    found = False
    for d in range(0, 10):
        if str(d) in digits_x:
            print(d)
            found = True
            break
    if not found:
        print(0)  

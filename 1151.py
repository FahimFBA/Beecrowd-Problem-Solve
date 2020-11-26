table = []
a,b = 0,1
table.append(0)
for _ in range(5000):
    table.append(b)
    a,b = b, a+b 

while True:
    try:
        n = int(input())
    except EOFError:
            break
    for i in range(n-1):
            print(table[i],end = ' ')
    print(table[n-1])
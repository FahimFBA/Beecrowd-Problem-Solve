i = 0
s = 0
q = 0

while True:
    i = int(input())
    if(i >= 0):
        s += i
        q += 1
    else:
        break

print("%.2f" %(s/float(q)))
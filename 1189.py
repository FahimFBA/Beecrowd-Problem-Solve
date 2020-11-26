s=chr(input())
n=11
o=1
for i in range(0,12):
    for j in range(0,12):
        m=float(input())
for i in range(0,5):
    for j in range(0,n):
        sum+=m
    n-=1
    o+=1
if(s=='S'):
    print(sum)
else:
    print(sum/30)
B=int(input())
G=int(input())
result = G//2
also_need=result-B

if (result>=B):
    print("Amelia tem todas bolinhas!")
else:
    print("Faltam",also_need,"bolinha(s)")
operador = input()
soma = 0
cont = 0

for i in range(12):
  for j in range(12):
    valor = float(input())
    if(i + j >= 12 and j - i >= 1):
      soma += valor
      cont += 1

if operador == "S":
  print("%.1f" %soma)
else:
  print("%.1f" %(soma / cont))
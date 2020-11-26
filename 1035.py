line = str(input(""));

split = line.split(" ");
a = int(split[0]);
b = int(split[1]);
c = int(split[2]);
d = int(split[3]);

if b>c and d>a and (c+d) > (a+b) and c>0 and d>0 and a%2 ==0:
	print( "Valores aceitos");
else:
	print("Valores nao aceitos");
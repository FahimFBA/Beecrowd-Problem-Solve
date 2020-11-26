line = str(input(""));

split = line.split();
a = int(split[0]);
b = int(split[1]);
c = int(split[2]);

maiorAB = ((a + b) + abs(a-b))/2;
maiorAC = ((a + c) + abs(a-c))/2;
maior = ((maiorAB + maiorAC) + abs(maiorAB-maiorAC))/2;

print("%d eh o maior" % maior);
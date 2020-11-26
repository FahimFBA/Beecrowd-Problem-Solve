first_value=int(input())
value=input().split()
for i in range(first_value):
    value[i]=int(value[i])

minimum_value=min(value)
output=value.index(minimum_value)+1
print(output)
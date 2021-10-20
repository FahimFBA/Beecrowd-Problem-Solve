test = int(input())
for i in range(test):
    str = input()
    if len(str) == 5:
        print(3)
    elif(str[0] == 't' and str[1] == 'w' or str[0] == 't' and str[2] == 'o' or str[1] == 'w' and str[2] == 'o'):
        print(2)
    else:
        print(1)

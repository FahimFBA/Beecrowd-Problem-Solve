t = int(input())
for i in range(t):
    str = input()
    t = int(input())
    str2 = ''
    for k in str:
        temp_str = ord(k)-t

        if(temp_str < 65):
            str2 += chr(91-(65-temp_str))
        else:
            str2 += chr(ord(k)-t)
    print(str2)
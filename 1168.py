t=int(input())

for j in range(1,t+1):
    str=input()
    l=len(str)
    total=0
    for i in range(0,l):
        if(str[i]=='0'):
            total+=6
        elif (str[i]=='1'):
            total+=2
        elif (str[i]=='2'):
            total+=5
        elif(str[i]=='3'):
            total+=5
        elif(str[i]=='4'):
            total+=4
        elif(str[i]=='5'):
            total+=5
        elif(str[i]=='6'):
            total+=6
        elif(str[i]=='7'):
            total+=3
        elif(str[i]=='8'):
            total+=7
        elif(str[i]=='9'):
            total+=6
    print ('{} leds'.format (total))
        
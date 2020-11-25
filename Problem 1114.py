while(True):
    try:
        n=int(input())
        if(n==2002):
            print("Acesso Permitido")
            break
        else:
            print("Senha Invalida")
    except EOFError:
        break
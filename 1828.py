for i in range(int(input(""))):
    j1, j2 = input("").split()

    if j1 == j2:
        win = "De novo!"
    elif j1 == "pedra":
        if j2 == "tesoura" or j2 == "lagarto":
            win = j1
        else:
            win = j2
    elif j1 == "papel":
        if j2 == "pedra" or j2 == "Spock":
            win = j1
        else:
            win = j2
    elif j1 == "tesoura":
        if j2 == "lagarto" or j2 == "papel":
            win = j1
        else:
            win = j2
    elif j1 == "lagarto":
        if j2 == "Spock" or j2 == "papel":
            win = j1
        else:
            win = j2
    elif j1 == "Spock":
        if j2 == "tesoura" or j2 == "pedra":
            win = j1
        else:
            win = j2

    if win == j1:
        win = "Bazinga!"
    elif win == j2:
        win = "Raj trapaceou!"

    print("Caso #%i:" %(i + 1), win)
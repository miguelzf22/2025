lado = [float(input()), float(input()), float(input())]

if lado[0]<lado[1]+lado[2] and lado[1]<lado[0]+lado[2] and lado[2]<lado[0]+lado[1]:
    if lado[0]==lado[1]==lado[2]:
        print("Equilatero")
    elif lado[0]==lado[1] or lado[1]==lado[2] or lado[0]==lado[2]:
        print("Isosceles")
    else:
        print("Escaleno")
else:
    print("Nao e triangulo")
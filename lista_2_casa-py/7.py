num = int(input())

match(num):
    case 1: print('Engenharia')
    case 2: print('Edificações')
    case 3: print('Sistemas Elétricos')
    case 4: print('Turismo')
    case 5: print('Análise de sistemas')
    case _: print('Inválido')
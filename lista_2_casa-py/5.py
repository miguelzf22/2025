def salario_liquido(salario):
    if salario < 800:
        return salario
    elif 800 <= salario <= 1600:
        salario = salario * 0.87
        return salario
    else:
        salario = salario * 0.78
        return salario

def adicionais(tempo, salario):
    adicional = 0
    valor_hora = salario/160
    horas_extra  = tempo - 160
    if tempo > 160:
        adicional = valor_hora * horas_extra * 1.5
        return adicional
    else:
        return adicional

while True:
    salario_bruto = float(input())
    horas = int(input())
    salario_liq = salario_liquido(salario_bruto) + adicionais(horas, salario_bruto)
    print(salario_liq)
    resposta = int(input('Continuar?\n1-Sim\t0-Não\n'))
    if resposta == 0:
        break
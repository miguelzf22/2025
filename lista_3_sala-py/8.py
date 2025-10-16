soma = 0
numero1 = 1
numero2 = 0

for i in range(1,16):
    soma = numero1 + numero2
    print(soma)
    numero1, numero2 = numero2, soma
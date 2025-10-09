nota = []
for i in range(0,2):
    nota.append(float(input(f"Insira nota {i+1}: ")))

soma = 0

for i in nota:
    soma+=i

media = soma/2

if media>=6:
    print("Aprovado")
else:
    exame = int(input('Nota do exame: '))
    if (media + exame)/2>=5:
        print("Aprovado por exame")
    else:
        print("Reprovado")
nota = []
for i in range(0,4):
    nota.append(float(input(f"Insira nota {i+1}: ")))

soma = 0

for i in nota:
    soma+=i

print(soma/4)
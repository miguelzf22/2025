nota = []
for i in range(0,3):
    nota.append(float(input(f"Insira nota {i+1}: ")))

soma = 0

for i in nota:
    soma+=i

print((nota[0]*4+nota[1]*4+nota[2]*2)/10)
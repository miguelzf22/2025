import math

nota = float(input())

if nota*10%10>5:
    print(math.ceil(nota))
else:
    print(math.floor(nota))
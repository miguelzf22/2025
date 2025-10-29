a, b, c = [], [], []

print("Valor A:\n")
for i in range(5):
    a.append(int(input()))

print("Valor B:\n")
for i in range(5):
    b.append(int(input()))
    c.append(a[i]-b[i])

print(c)
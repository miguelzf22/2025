def fatorial(n):
    fat = 1
    for i in range(1, n+1):
        fat*=i
    return fat

a=[]
b=[]

for i in range(6):
    a.append(int(input()))
    b.append(fatorial(a[i]))

print(b)
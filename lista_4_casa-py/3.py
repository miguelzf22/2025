a = input()

while(len(a)!=9):
    a=input()

b=list(a)
b[0],b[1]=a[1],a[0]
b[7],b[8]=a[8],a[7]

print(b)
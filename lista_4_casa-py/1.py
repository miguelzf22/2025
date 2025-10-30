a = input()

while(len(a)!=9):
    a=input()

b=list(a)
b[2]=a[7]
b[3],b[6],b[7]=a[6],a[2],a[3]

print(b)
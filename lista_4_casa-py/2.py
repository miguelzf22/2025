a = input()

while(len(a)!=9):
    a=input()

list(map(int, a))
a=list(a)
b=a

c=[]
for i in range(5,9):
    c.append(b[i])

c.reverse()

for i in range(5,9):
    b[i]=c[i-5]

print(list(map(str, b)))
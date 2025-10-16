number=[]

for i in range(0,3):
    number.append(int(input()))

number.sort()

print(number[2], number[0], number[1])
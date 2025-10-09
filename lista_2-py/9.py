uhh = []
result=[]

for i in range(0,2):
    uhh.append(int(input()))

for i in uhh:
    if i % 4 == 0 or i % 5 == 0: result.append(i)

print(result)
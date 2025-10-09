uhh = []
result=[]

for i in range(0,3):
    uhh.append(int(input()))
    
for i in uhh:
    if i % 3 == 0 and i % 2 == 0: result.append(i)

print(result)
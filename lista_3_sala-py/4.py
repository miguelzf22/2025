num = int(input())

if num <= 50:
    i = 1
    maximo = num
    while(maximo<=250):
        print(maximo)
        maximo = num*3**i
        i+=1
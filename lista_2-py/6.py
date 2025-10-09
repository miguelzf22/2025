a = int(input())
b = int(input())
c = int(input())
delta = b**2-4*a*c

if delta>0:
    x = [(b*-1+(delta**0.5))/2*a, (b*-1-(delta**0.5))/2*a]
    x.sort()
    print(x)
else:
    print("Delta negativo!")
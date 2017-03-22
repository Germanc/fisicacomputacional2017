#!/usr/bin/python3

def funcion(n):
    if n%2 == 0:
        n = n/2
    else:
        n = 3*n+1
    return n
mayor = 13 
contador2 = 0
for i in range(13, 1000000):
    print(i)
    contador = 0
    n = i
    while n != 1:
        n = funcion(n)
        contador = contador + 1
    if contador > contador2:
        mayor = i
        contador2=contador
print(mayor)
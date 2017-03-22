#!/usr/bin/python3
from math import sqrt
numero = 600851475143
cannot = 0
lista = []

def factorize(numberi,numero):
    for n in range(2,numberi):
        cannot = 0
        while cannot == 0:
            if numero%n==0:
                numero = numero/n
                print(numero)
                lista.append(n)
            else:
                cannot = 1
        if numero == 1:
            break

numberi = 300425737571
factorize(numberi,numero)
print(lista)
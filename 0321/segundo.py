#!/usr/bin/python3

suma = 2
ultimo = 2
anteultimo = 1

while ultimo < 4000000:
    siguiente = ultimo+anteultimo
    anteultimo = ultimo
    ultimo = siguiente
    if ultimo%2 == 0:
        suma = suma + ultimo
print(suma)
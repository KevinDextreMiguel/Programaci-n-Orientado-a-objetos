import random #include<iostream>
def generar_datos(n):
  for i in range(n):
    valor = random.randint(1,9)
    mi_lista.append(valor)#agregar al final

def mostrar():
  for i in range(len(mi_lista)):
    print(mi_lista[i])
  
  print()

def cantidad_repeticiones(): #mi_lista = [1,6,8,9,8]
  for i in range(1,10):
    cantidad = mi_lista.count(i)#devuelve la cantidad de elementos
    print('Cantidad de repeticiones de ',i,': ',cantidad)
  

def es_primo(i):# i = 4
  for k in range(2,i): # n es primo si es divisible 1,n
    if i % k == 0:
      return False

  return True
def reemplazar_digitos():
  for i in range(len(mi_lista)):
    if es_primo(mi_lista[i]) and mi_lista[i] != 1 :
      mi_lista[i] = mi_lista[i] + 1


n = -1

while n<1:
  n = int(input('N: '))

mi_lista = []
generar_datos(n)
mostrar()
cantidad_repeticiones() # 3 ->4       5-> 6
mi_lista.sort()
mostrar()
reemplazar_digitos()
mostrar()
import random
def generar():
  for i in range(n):
    valor = random.randint(1,9)
    lista_enteros.append(valor)

def mostrar():
  for i in range(n):
    print(lista_enteros[i])
  
  print()

def cantidad_repeticiones():
  for i in range(1,10):
    cantidad = lista_enteros.count(i)
    print('Cantidad de repeticiones de ',i,': ',cantidad)


def es_primo(valor):
  for i in range(2,valor):
    if valor % i ==0:
      return False
  
  return True
def reemplazar_digito():
  for i in range(n):
    if es_primo(lista_enteros[i]):
      lista_enteros[i] = lista_enteros[i] +1
n = -1
while n<1:
  n = int(input('N: '))

lista_enteros = []

generar()
mostrar()
lista_enteros.sort()
mostrar()
cantidad_repeticiones()
reemplazar_digito()
mostrar()
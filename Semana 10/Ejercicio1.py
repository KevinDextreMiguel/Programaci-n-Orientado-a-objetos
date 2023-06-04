def calcular_factorial(n):
  factorial=1
  for i in range(2,n+1):
    factorial*=i
  return factorial

def calcular_serie(n):   
  e=0
  for i in range(1,n+1):
    numerador = i**2
    denominador = 2 * calcular_factorial(i)
    e+=numerador / denominador
  print('El valor del número e es: ',e)

n=-1
while n<1 or n>120:
  n=int(input('N: '))

calcular_serie(n)
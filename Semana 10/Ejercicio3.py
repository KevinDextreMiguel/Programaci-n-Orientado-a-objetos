def calcular_sumatoria(n,b):
  aumentar2 = 2
  aumentar3 = 4
  suma = 0
  for i in range(n):
    suma += aumentar2 * b / aumentar3 * (-1)**i

    aumentar2 = aumentar2 + 2
    aumentar3 += 3

  return suma

n=-1
b=-1
while n<1:
  n = int(input('N: '))
while b < 1 or b>5:
  b=float(input('B: '))
print('Resultado: ',calcular_sumatoria(n,b))
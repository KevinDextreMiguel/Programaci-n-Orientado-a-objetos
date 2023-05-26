n = -1
while n<1 or n >120:
  n = int(input('N: '))

factorial = 1
e = 0
for i in range(1,n+1):
  factorial *= i
  numerador = i**2
  denominador = 2 * factorial
  e += numerador / denominador

print(e)
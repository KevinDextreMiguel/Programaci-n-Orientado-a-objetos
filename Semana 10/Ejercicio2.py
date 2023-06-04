def graficar(n):

  for i in range(n):
    for espacio in range(n-i):
      print(end='  ')
    
    if i % 2 ==0:
      print(end=' -')
    else:
      print(end=' |')

    for j in range(i*2-1):
      print(end=' .')

    if i % 2 ==0 and i!=0:
      print(end=' -')
    elif i!=0:#   else if = elfi
      print(end=' |')

    print()   


n = -1
while n<4 or n>15:
  n = int(input('N: '))

graficar(n)


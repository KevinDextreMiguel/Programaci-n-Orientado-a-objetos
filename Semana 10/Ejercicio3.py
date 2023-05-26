n = -1
b = -1
while n<1:
  n = int(input('N: '))

while b<1:
  b = float(input('B: '))

aumentar_2 = 2
aumentar_3 = 4
sum = 0
for i in range(n):

  sum += aumentar_2 * b / aumentar_3 * (-1)**i

  aumentar_2 += 2
  aumentar_3 += 3

print(sum)
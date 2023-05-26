n = -1
while n<4 or n >15:
  n = int(input('N: '))

for i in range(n):
  for e in range(n-i,0,-1):
    print(end='  ')
  
  if i % 2 ==0:
    print(end=' -')
  else:
    print(end=' |')

  for j in range(i*2-1):
    print(end=' .')

  if i % 2 ==0 and i!=0:
    print(end=' -')
  elif i!=0:
    print(end=' |')

  print()


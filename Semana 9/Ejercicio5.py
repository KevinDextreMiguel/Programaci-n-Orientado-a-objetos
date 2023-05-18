salario_mensual = float(input('Ingrese el salario mensual: '))
numero_personas=int(input('Ingrese número de personas a cargo: '))

tipo_linea = 'O'

if salario_mensual >= 0 and numero_personas > 0:
  if numero_personas == 1:
    if salario_mensual <= 500:
      tipo_linea = 'P'
  elif numero_personas < 5:
    if salario_mensual <= 750:
      tipo_linea = 'P'
  else:
    if salario_mensual <= 1000:
      tipo_linea = 'P'
  
  print('Tipo de línea al que puede acceder: ',tipo_linea)

else:
  print('datos incorrectos')
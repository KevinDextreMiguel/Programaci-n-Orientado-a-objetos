codigo=int(input("Ingrese el código del producto: "))
residuo = codigo %10

if residuo <6:
  cantidad=int(input("Número de unidades a comprar: "))

  precio = 0.0

  if residuo == 1:
    precio = 15.75
  elif residuo == 2:
    precio = 21
  elif residuo == 3:
    precio = 8.5
  elif residuo == 4:
    precio = 25 
  else:
    precio = 13.25

  monto_total = precio * cantidad

  print("El precio final a pagar por el producto es s/",monto_total)

  if monto_total >=100:
    print("El precio final aplicando el descuento de 11% es s/",monto_total*0.89)
  else:
    print("No tiene descuento ya que el monto total es menor a s/100.00")

else:
  print("El último dígito del código debe ser menor a 6")
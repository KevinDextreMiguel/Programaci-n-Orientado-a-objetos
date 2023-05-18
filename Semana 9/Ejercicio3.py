cantidad = int(input("Ingrese la cantidad de alambre requerido: "))

cantidad500 = cantidad//500
residuo_cantidad500 = cantidad % 500

cantidad300 = residuo_cantidad500 //300
residuo_cantidad300 = residuo_cantidad500 % 300

cantidad75 = residuo_cantidad300 //75
ultimo_rollo = residuo_cantidad300 % 75

print("Se requiere:")
print(cantidad500,"rollos de 500 metros")
print(cantidad300,"rollo de 300 metros")
print(cantidad75,"rollo de 75 metros")
print("El último rollo tendrá",ultimo_rollo,"metro")
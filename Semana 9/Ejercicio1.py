import math
arista=input("Ingresar arista del tetraedero: ")
arista=float(arista)
#área
area1 = arista**2 * 3**0.5
area2 = arista**2 * math.sqrt(3)

#volumen
volumen = 2**0.5 / 12 * arista**3

print("El área es: ",area1," m^2")
#cout<<"El área es: "<<area1<<" m^2"
print("El volumen es: ",volumen," m^3")
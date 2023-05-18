numero=int(input("Ingrese el número generado: "))

TTTT = numero // 1000000
HH = numero % 1000000 //10000
MM = numero % 10000 //100
SS = numero % 100 

print("Código del trabajador: ",TTTT)
print("Hora de entrada: ",HH)
print("Minuto de entrada: ",MM)
print("Segundos de entrada: ",SS)


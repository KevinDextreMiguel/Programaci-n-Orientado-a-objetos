import random

class Persona:
  # __init__ constructor en python
  def __init__(self,nombre,edad,sexo,peso,altura):
    self.__nombre = nombre
    self.__edad = edad
    self.__sexo = sexo
    self.__peso = peso
    self.__altura = altura
    self.__dni = 0
  
  def calcular_imc(self):
    imc = self.__peso /  self.__altura**2
    var = 'Sobrepeso'
    if imc <20:
      var = 'Por debajo del peso ideal'
    elif imc>=20 and imc <=25:
      var = 'Peso ideal'
    return var
  
  def es_mayor_edad(self):
    var = 'Mayor de edad'
    if self.__edad <18:
      var = 'Menor de edad'
    return var
  
  def generar_dni(self):
    self.__dni = random.randint(10000000,99999999)
  
  #set
  def set_nombre(self,nombre):
    self.__nombre = nombre
  def set_edad(self,edad):
    self.__edad = edad
  def set_sexo(self,sexo):
    self.__sexo = sexo
  def set_peso(self,peso):
    self.__peso = peso
  def set_altura(self,altura):
    self.__altura = altura
  def set_dni(self,dni):
    self.__dni = dni
  
  #get
  def get_nombre(self):
    return self.__nombre 
  def get_edad(self):
    return self.__edad
  def get_sexo(self):
    return self.__sexo 
  def get_peso(self):
    return self.__peso
  def get_altura(self):
    return self.__altura 
  def get_dni(self):
    return self.__dni

  def get_info(self):
    var = self.__nombre+' '+ str(self.__edad)+' '+self.__sexo+' '+str(self.__peso)+' ' +str(self.__altura)+' ' +str(self.__dni) 
    print(var)








edad=peso=altura = -1

while edad<0:
  edad = int(input('edad: '))
while peso<0:
  peso = float(input('Peso: '))
while altura<0:
  altura = float(input('Altura: '))

nombre = input('Nombre: ')
sexo = input('Sexo: ')

#Creamos un objeto en python
persona1 = Persona(nombre,edad,sexo,peso,altura)

persona1.generar_dni() 
print("\n")
print('============================')
print(persona1.calcular_imc())
print(persona1.es_mayor_edad())
persona1.get_info()
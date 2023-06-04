import random
class Contrasenia:
  def __init__(self,longitud):
    self.__longitud = longitud
    self.__contrasenia = ""
  
  def generar_contrasenia(self):
    for i in range(self.__longitud):
      dado = random.randint(0,3)
      var=''
      if dado==0:
        var = chr(random.randint(65,90))
      elif dado == 1:
        var = chr(random.randint(97,122))
      else:
        var = chr(random.randint(49,57))
      self.__contrasenia += var
    
    return self.__contrasenia

  def es_segura(self):
    mayuscula = minuscula = numero = 0
    var ='F'
    for i in range(self.__longitud):
      if self.__contrasenia[i]<=chr(57) :
        numero+=1
      elif self.__contrasenia[i]<=chr(90) :# else if
        mayuscula +=1
      else:
        minuscula+=1

    if mayuscula>2 and minuscula >1 and numero >5:
      var ='V'
    
    return var

  #set
  def set_longitud(self,longitud):
    self.__longitud = longitud

  #get
  def get_longitud(self):
    return self.__longitud 
  def get_contrasenia(self):
    return self.__contrasenia  







def generar_contrasenias(n):
  longitud = 0
  for i in range(n):
    longitud = random.randint(12,16)
    contrasenia = Contrasenia(longitud)

    contrasenias.append(contrasenia.generar_contrasenia())
    seguras.append(contrasenia.es_segura())


def imprimir(n):
  for i in range(n):
    print(contrasenias[i],seguras[i])


n=10
seguras = []
contrasenias = []

generar_contrasenias(n)
imprimir(n)


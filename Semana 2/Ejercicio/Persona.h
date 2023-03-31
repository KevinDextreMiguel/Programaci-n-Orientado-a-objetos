#pragma once
# include <iostream> 
# include <string> 
using namespace std;

int generar_dni()
{
	int dni= rand() % (99999999 -10000000 + 1) + 10000000;
	return dni;
}

class Persona
{

public:
	Persona();
	Persona(string _nombre, int _edad, char _sexo);
	Persona(string _nombre, int _edad, char _sexo, float _peso, float _altura);
	~Persona();

	int indice_masa_corporal();
	bool es_mayor_de_edad();

	// set 
	void  modificar_name(string _nombre);
	void  modificar_edad(int _edad);
	void  modificar_sexo(char _sexo);
	void  modificar_peso(float _peso);
	void  modificar_altura(float _altura);

	// get
	string devolver_nombre();
	int  devolver_edad();
	char  devolver_sexo();
	float  devolver_peso();
	float  devolver_altura();

	void  imprimir();
private:
	string nombre;
	int edad, DNI;
	char sexo;
	float peso , altura;
};

Persona::Persona()
{
	nombre = "Kevin";
	sexo = 'H';
	edad = 22;
	DNI = generar_dni();
	peso = 50; 
	altura = 1.5;
}
Persona::Persona(string _nombre, int _edad, char _sexo)
{
	nombre = _nombre;
	edad = _edad;
	sexo = _sexo;
	peso = 50; 
	altura = 1.5;
	DNI = generar_dni();
}
Persona::Persona(string _nombre, int _edad, char _sexo, float _peso, float _altura)
{
	nombre = _nombre;
	edad = _edad;
	sexo = _sexo;
	peso = _peso;
	altura = _altura;
	DNI = generar_dni();
}
Persona::~Persona() {}

int  Persona::indice_masa_corporal()
{
	int valor = 1;
	float IMC = peso / pow(altura, 2);
	if(IMC < 20)valor = -1;
	else if(IMC < 26)valor = 0;
	return valor;
}
bool  Persona::es_mayor_de_edad()
{
	bool condicion = false;
	if (edad > 17)condicion = true;
	return condicion;
}

//set  
void  Persona::modificar_name(string _nombre) { nombre = _nombre; }
void  Persona::modificar_edad(int _edad) { edad = _edad; }
void  Persona::modificar_sexo(char _sexo)
{ 
	if(_sexo=='f'|| _sexo == 'F')
		sexo = _sexo; 
}
void  Persona::modificar_peso(float _peso) { peso = _peso; }
void  Persona::modificar_altura(float _altura) { altura = _altura; }

//get
string Persona::devolver_nombre() { return nombre; }
int  Persona::devolver_edad() { return edad; }
char  Persona::devolver_sexo(){return sexo;}
float  Persona::devolver_peso(){return peso;}
float  Persona::devolver_altura(){return altura;}
void Persona::imprimir()
{
	cout << " \n\n nombre: " << nombre;
	cout << " \n edad: " << edad;
	cout << " \n DNI: " << DNI;
	cout << " \n sexo: " << sexo;
	cout << " \n peso en kg: " << peso;
	cout << " \n altura en m: " << altura;
}
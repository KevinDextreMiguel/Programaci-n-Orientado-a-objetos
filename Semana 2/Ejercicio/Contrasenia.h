#pragma once
#include<iostream>
#include<ctype.h>
#include<vector>
using namespace std;
using namespace System;
class Contrasenia
{
public:
	Contrasenia();
	Contrasenia(int _longitud);
	~Contrasenia();

	void generar_contrasenia();
	bool es_seguro();

	//set
	void modificar_longitud(int _longitud);

	//get
	string retornar_contrasenia();
	int retornar_longitud();
private:
	string contrasenia;
	int longitud;
};

Contrasenia::Contrasenia()
{
	longitud = 8;
}
Contrasenia::Contrasenia(int _longitud)
{
	contrasenia = "";
	longitud = _longitud;
}
Contrasenia::~Contrasenia(){}

void Contrasenia::generar_contrasenia()
{
	char aux;
	for (int i = 0; i < longitud; i++)
	{
		int  aleatorio = rand() % 40;
		if (aleatorio % 2 == 0 || aleatorio % 5 == 0)
			aux = rand() % (57 - 49 + 1) + 49;
		else if (aleatorio % 3 == 0)
			aux= rand() % (122 - 97 + 1) + 97;
		else
			aux = rand() % (90 - 65 + 1) + 65;

		contrasenia += aux;
	}
}

bool Contrasenia::es_seguro()
{
	bool condicion = false;
	int contar_numero = 0, contar_mayusculas = 0, contar_minusculas = 0;
	for(int i = 0; i < longitud; i++)
	{
		if (isdigit(contrasenia[i]))
			contar_numero++;
		else if(isupper(contrasenia[i]))
			contar_mayusculas++;
		else
			contar_minusculas++;
	}
	if (contar_mayusculas > 2 && contar_minusculas > 1 && contar_numero > 5)
		condicion = true;
	return condicion;
}

//set
void Contrasenia::modificar_longitud(int _longitud){ longitud = _longitud; }

//get
string Contrasenia::retornar_contrasenia(){return contrasenia;}
int Contrasenia::retornar_longitud() {return longitud; }
#pragma once
#include"Contrasenia.h"

class ArrContrasenia
{
public:
	ArrContrasenia();
	~ArrContrasenia();

	void generar_contrasenias();
	void mostrar();
private:
	vector<string>contrasenias;
	vector<bool>Sonseguras;
	Contrasenia ObjContrasenia;
};

ArrContrasenia::ArrContrasenia()
{
	ObjContrasenia = Contrasenia();
}

ArrContrasenia::~ArrContrasenia(){}

void ArrContrasenia::generar_contrasenias()
{
	srand(time(NULL));
	int n= rand() % (8 - 5 + 1) + 5;
	for (int i = 0; i < n; i++)
	{
		
		int lon = rand() % (20 - 8 + 1) + 8;
		ObjContrasenia = Contrasenia();
		ObjContrasenia.modificar_longitud(lon);
		ObjContrasenia.generar_contrasenia();
		ObjContrasenia.es_seguro();
		//agregar a los vectores
		contrasenias.push_back(ObjContrasenia.retornar_contrasenia());
		Sonseguras.push_back(ObjContrasenia.es_seguro());

		cout <<"\n" <<contrasenias.at(i)<<"  "<< Sonseguras[i];
	}
}
void ArrContrasenia::mostrar()
{
	cout << "\n\n\n";
	for (int i = 0; i < contrasenias.size(); i++)
	{
		cout << "\nContrasenia" << i+1 << ": " << contrasenias.at(i)
			<< " - (V de verdad o F de falso): ";
		if (Sonseguras[i])
			cout << "V";
		else 
			cout << "F";
	}
}
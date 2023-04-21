#pragma once
#include"Avion1.h"
#include"Avion2.h"
#include"Avion3.h"
#include"Avion4.h"
class Jugar
{
public:
	Jugar();
	~Jugar();
	void volar();
	void set_tecla(char _tecla);
private:
	char tecla;
	vector<Avion*>aviones;
};


Jugar::Jugar()
{
	aviones.push_back(new Avion1());//posicion 0
	aviones.push_back(new Avion2());
	aviones.push_back(new Avion3());
	aviones.push_back(new Avion4());//posicion 3
}
Jugar::~Jugar(){}


void Jugar::volar()
{
	//int valor;// = rand() % 4;
	switch (tecla)
	{
	case '1':
		//valor = rand() % 4;
		aviones.at(0)->borrar();
		aviones.at(0)->mover();
		aviones.at(0)->dibujar();
		break;
	case '2':
		aviones.at(1)->borrar();
		aviones.at(1)->mover();
		aviones.at(1)->dibujar();
		break;
	case '3':
		aviones.at(2)->borrar();
		aviones.at(2)->mover();
		aviones.at(2)->dibujar();
		break;
	case '4'://.at(i)=[i]
		aviones[3]->borrar();
		aviones[3]->mover();
		aviones[3]->dibujar();
	}
}
void Jugar::set_tecla(char _tecla) { tecla = _tecla; }
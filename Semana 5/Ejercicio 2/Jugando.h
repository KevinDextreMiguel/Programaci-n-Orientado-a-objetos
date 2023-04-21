#pragma once
#include"Alfa.h"
#include"Beta.h"
#include"Gamma.h"
class Jugando
{
public:
	Jugando();
	~Jugando();
	void borrar_todos();
	void mover_todos();
	void dibujar_todos();

	void agregar_alfa();
	void agregar_beta();
	void agregar_gamma();

	void eliminar();
	bool condicion();
private:
	vector<Ovni*>ovnis;
	int contbeta, contgamma, contalfa;
};

Jugando::Jugando()
{
	contbeta = 0;
	contgamma = 0;
	contalfa = 0;
}
Jugando::~Jugando(){}
void Jugando::borrar_todos()
{
	for (int i = 0; i < ovnis.size(); i++)
		ovnis[i]->borrar();
}
void Jugando::mover_todos()
{
	for (int i = 0; i < ovnis.size(); i++)
		ovnis.at(i)->mover();
}
void Jugando::dibujar_todos() 
{
	for (int i = 0; i < ovnis.size(); i++)
		ovnis.at(i)->dibujar();
}



void Jugando::agregar_alfa()
{
	ovnis.push_back(new Alfa());
	contbeta++;
	contgamma++;
	contalfa++;
	if (contbeta % 2 == 0)
		agregar_beta();

	if (contgamma % 4 == 0)
		agregar_gamma();
}
void Jugando::agregar_beta()
{
	ovnis.push_back(new Beta());
}
void Jugando::agregar_gamma()
{
	ovnis.push_back(new Gamma());
}


void Jugando::eliminar()
{
	for (int i = 0; i < ovnis.size(); i++)
		if (ovnis.at(i)->get_alto() + ovnis.at(i)->get_y()+4 > ALTO)
		{
			ovnis.at(i)->borrar();
			ovnis.erase(ovnis.begin() + i);
		}
}
bool Jugando::condicion()
{
	return contalfa <= 12;
}
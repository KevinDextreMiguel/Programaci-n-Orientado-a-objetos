#pragma once
#include<vector>
#include"Bicicleta.h"
#include"Bus.h"
#include"Carro.h"
#include"Persona.h"
class Jugar
{
public:
	Jugar();
	~Jugar();

	void mover_todo();
	void borrar_todo();
	void dibujar_todo();

	void direccion_persona(char tecla);
	bool colision_objetos();
private:
	vector<Terrestre*>moviles;
	Persona* persona;
};
Jugar::Jugar()
{
	persona = new Persona();
	moviles.push_back(new Bus());
	moviles.push_back(new Carro());
	moviles.push_back(new Bicicleta());
}
Jugar::~Jugar(){}
void Jugar::mover_todo()
{
	for (int i = 0; i < moviles.size(); i++)
		moviles.at(i)->mover();

	persona->mover();
}
void Jugar::borrar_todo()
{
	for (int i = 0; i < moviles.size(); i++)
		moviles.at(i)->borrar();

	persona->borrar();
}
void Jugar::dibujar_todo()
{
	for (int i = 0; i < moviles.size(); i++)
		moviles.at(i)->dibujar();

	persona->dibujar();
}
void Jugar::direccion_persona(char tecla)
{
	switch (tecla)
	{
	case 75:persona->direccion(-1, 0); break;
	case 77:persona->direccion(1, 0); break;
	case 72:persona->direccion(0,-1); break;
	case 80:persona->direccion(0,1);
	}
}



bool Jugar::colision_objetos()
{
	bool condicion = true;
	for (int i = 0; i < moviles.size()-1; i++)
		if (moviles.at(i)->colision(persona->get_x(), persona->get_y(),
			persona->get_ancho(), persona->get_alto()))
		{
			condicion = false;
		}
	if (moviles.at(2)->colision(persona->get_x(), persona->get_y(),
		persona->get_ancho(), persona->get_alto()))
	{
		persona->get_x_y();
		persona->direccion(0, 0);
	}
	return condicion;
}
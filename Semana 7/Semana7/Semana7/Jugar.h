#pragma once
#include<vector>
#include"Casa.h"
#include"Monigote.h"
#include"Vacuna.h"
#include"Virus.h"

class Jugar
{
public:
	Jugar();
	~Jugar();
	void borrar_todo();
	void mover_todo();
	void dibujar_todo();
	void mover_monigote(char tecla);
	void insetar_virus();
	void insetar_vacuna();
	bool colision();
	int get_cantidad_virus();
	int get_cantidad_colision();
private:
	Monigote *monigote;
	Casa* casa;
	vector<Virus>virus;
	vector<Vacuna>vacunas;
	int cantidad_colision;
	bool condicion;
	bool inmunidad;
	clock_t tiempo;
};

Jugar::Jugar()
{
	cantidad_colision = 0;
	condicion = true;
	inmunidad = false;
	monigote = new Monigote();
	casa = new Casa();
}

Jugar::~Jugar()
{
}
void Jugar::borrar_todo()
{
	for (int i = 0; i < virus.size(); i++)
		virus.at(i).borrar();

	for (int i = 0; i < vacunas.size(); i++)
		vacunas.at(i).borrar();

	monigote->borrar();
}
void Jugar::mover_todo()
{
	for (int i = 0; i < virus.size(); i++)
		virus.at(i).mover();

	for (int i = 0; i < vacunas.size(); i++)
		vacunas.at(i).mover();

	monigote->mover();
}
void Jugar::dibujar_todo()
{
	for (int i = 0; i < virus.size(); i++)
		virus.at(i).dibujar();

	for (int i = 0; i < vacunas.size(); i++)
		vacunas.at(i).dibujar();

	monigote->dibujar();
	casa->dibujar();
}
void Jugar::mover_monigote(char tecla)
{
	switch (tecla)
	{
	case 77:monigote->set_direccion(1,0); break;
	case 75:monigote->set_direccion(-1, 0); break;
	case 72:monigote->set_direccion(0, -1); break;
	case 80:monigote->set_direccion(0, 1); 
	}
}
void Jugar::insetar_virus()
{
	virus.push_back(Virus());
}
void Jugar::insetar_vacuna()
{
	if(vacunas.size()<5)
		vacunas.push_back(Vacuna());
}
bool Jugar::colision()
{
	for (int i = 0; i < virus.size(); i++)
		if (virus.at(i).colision(monigote->get_x(), monigote->get_y(),
			monigote->get_ancho(), monigote->get_alto()))
		{
			if (!inmunidad)
			{
				monigote->borrar();
				monigote->posicion_inicial(0, 0);
				cantidad_colision++;
			}
		}

	for (int i = 0; i < vacunas.size(); i++)
		if (vacunas.at(i).colision(monigote->get_x(), monigote->get_y(),
			monigote->get_ancho(), monigote->get_alto()))
		{
			tiempo = clock();
			inmunidad = true;
		}


	if ((clock() - tiempo) / CLOCKS_PER_SEC>=5)
		inmunidad = false;

	if (casa->colision(monigote->get_x(), monigote->get_y(),
		monigote->get_ancho(), monigote->get_alto()))
		condicion = false;

	if(cantidad_colision>=3)
		condicion = false;

	return condicion;
}
int Jugar::get_cantidad_virus() { return virus.size(); }
int Jugar::get_cantidad_colision() { return cantidad_colision; }
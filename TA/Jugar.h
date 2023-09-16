#pragma once
#include<vector>
#include"Diamante.h"
#include"Digger.h"
#include"Monstruo.h"
//manejadora
class Jugar
{
public:
	Jugar();
	~Jugar();
	void generar_elementos();
	void borrar_todos();
	void mover_todos();
	void dibujar_todos();
	void mover_personaje(char tecla);
	bool colison_elementos();
	void mostrar_vida();
private:
	vector<Diamante>diamantes;
	vector<Monstruo>monstruos;
	Digger obj;
};

Jugar::Jugar(){}
Jugar::~Jugar(){}
void Jugar::generar_elementos()
{
	for (int i = 0; i < 25; i++)
		diamantes.push_back(Diamante());

	monstruos.push_back(Monstruo(0, 1));
	monstruos.push_back(Monstruo(1, 0));
}
void Jugar::borrar_todos()
{
	for (int i = 0; i < monstruos.size(); i++)
		monstruos[i].borrar();
	obj.borrar();
}
void Jugar::mover_todos()
{
	for (int i = 0; i < monstruos.size(); i++)
		monstruos[i].mover();
	obj.mover();
}
void Jugar::dibujar_todos()
{
	for (int i = 0; i < diamantes.size(); i++)
		diamantes.at(i).dibujar();//diamantes[i].dibujar();	
	for (int i = 0; i < monstruos.size(); i++)
		monstruos[i].dibujar();
	obj.dibujar();
}
void Jugar::mover_personaje(char tecla)
{
	switch (tecla)
	{
	case 75:
		obj.set_dx(-1);obj.set_dy(0);break;
	case 72:obj.set_dx(0);obj.set_dy(-1);
		break;
	case 77:obj.set_dx(1);obj.set_dy(0);
		break;
	case 80:
		obj.set_dx(0);
		obj.set_dy(1);
	}
}
bool Jugar::colison_elementos()
{
	for (int i = 0; i < diamantes.size(); i++)
		if (diamantes[i].colision(obj.get_x(), obj.get_ancho(), obj.get_y(), obj.get_alto()))
		{
			diamantes.erase(diamantes.begin() + i);
			obj.set_vida(1);
		}
	for (int i = 0; i < monstruos.size(); i++)
		if (monstruos[i].colision(obj.get_x(), obj.get_ancho(), obj.get_y(), obj.get_alto()))
		{
			obj.borrar();
			obj.set_vida(-1);
			obj.set_x(0);
			obj.set_y(0);
		}
	if (diamantes.size() == 0)return false;
	return true;
}
void Jugar::mostrar_vida()
{
	Console::SetCursorPosition(100, 0);  cout << "Vida: "<<obj.get_vida();
	Console::SetCursorPosition(100, 1);  cout << "Diamantes: "<< diamantes.size();
}
#pragma once
#include"Avion1.h"
#include"Avion2.h"
#include"Avion3.h"
#include"Avion4.h"
#include"Avion5.h"
#include"Avion6.h"
#include"Avion7.h"
#include"Avion8.h"
#include"Avion9.h"

class Jugando
{
public:
	Jugando();
	~Jugando();
	void elegir(char letra);
private:
	Avion1* obj1;
	Avion2* obj2;
	Avion3* obj3;
	Avion4* obj4;
	Avion5* obj5;
	Avion6* obj6;
	Avion7* obj7;
	Avion8* obj8;
	Avion9* obj9;
};

Jugando::Jugando()
{
	obj1= new Avion1();
	obj2= new Avion2();
	obj3= new Avion3();
	obj4= new Avion4();
	obj5= new Avion5();
	obj6= new Avion6();
	obj7= new Avion7();
	obj8= new Avion8();
	obj9= new Avion9();
}

Jugando::~Jugando()
{
}

void Jugando::elegir(char letra)
{
	switch (letra)
	{
	case '1': 
		obj1->borrar();
		obj1->mover();
		obj1->dibujar();
		break;
	case '2':
		obj2->borrar();
		obj2->mover();
		obj2->dibujar();
		break;
	case '3':
		obj3->borrar();
		obj3->mover();
		obj3->dibujar();
		break;
	case '4':
		obj4->borrar();
		obj4->mover();
		obj4->dibujar();
		break;
	case '5':
		obj5->borrar();
		obj5->mover();
		obj5->dibujar();
		break;
	case '6':
		obj6->borrar();
		obj6->mover();
		obj6->dibujar();
		break;
	case '7':
		obj7->borrar();
		obj7->mover();
		obj7->dibujar();
		break;
	case '8':
		obj8->borrar();
		obj8->mover();
		obj8->dibujar();
		break;
	case '9':
		obj9->borrar();
		obj9->mover();
		obj9->dibujar();
	}
}
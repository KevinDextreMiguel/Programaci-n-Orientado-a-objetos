#pragma once
#include <iostream>
#include <conio.h>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Base
{
public:
	Base(int _ancho, int _alto);
	~Base();
	void borrar();
	void mover();
	bool colision(int _x, int _ancho, int _y, int _alto);
	//set
	void set_x(int _x);
	void set_y(int _y);
	void set_dx(int _dx);
	void set_dy(int _dy);
	//get
	int get_x();
	int get_y();
	int get_ancho();
	int get_alto();

protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int color;
};

Base::Base(int _ancho, int _alto)
{
	ancho = _ancho;
	alto = _alto;
	dx = dy = 1;
	x = rand() % (ANCHO_CONSOLA - ancho);
	y = rand() % (ALTO_CONSOLA - alto);
}

Base::~Base() {}
void Base::borrar()
{
	for (int i = 0; i < ancho; i++)
		for (int j = 0; j < alto; j++) 
		{
			Console::SetCursorPosition(x+i, y+j);
			cout << " ";
		}
}
void Base::mover()
{
	if (x + dx<0 || x + dx + ancho>ANCHO_CONSOLA)dx *= -1;
	if (y + dy<0 || y + dy + alto>ALTO_CONSOLA)dy *= -1;

	x += dx;
	y += dy;
}
bool Base::colision(int _x, int _ancho, int _y, int _alto)
{
	return x + ancho > _x && x < _x + _ancho && y<_y + _alto && y + alto>_y;
}
//set
void Base::set_x(int _x) { x = _x; }
void Base::set_y(int _y) { y = _y; }
void Base::set_dx(int _dx) { dx = _dx; }
void Base::set_dy(int _dy) { dy = _dy; }
//get
int Base::get_x() { return x; }
int Base::get_y() { return y; }
int Base::get_alto() { return alto; }
int Base::get_ancho() { return ancho; }

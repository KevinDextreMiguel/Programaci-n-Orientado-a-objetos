#pragma once
#include<iostream>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;
class Base
{
public:
	Base(int _x,int _y,int _dx,int _dy,int _ancho,int _alto,int _color);
	~Base();
	void borrar();
	//get
	int get_ancho();
	int get_alto();
	int get_x();
	int get_y();
	bool colision(int _x, int _y, int _ancho, int _alto);
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int color;
};

Base::Base(int _x, int _y, int _dx, int _dy, int _ancho, int _alto, int _color)
{
	x = _x;
	y = _y;
	dx = _dx; 
	dy=_dy;
	ancho = _ancho;
	alto=_alto;
	color=_color;
}

Base::~Base(){}
void Base::borrar()
{
	for (int i = 0; i < ancho; i++)
		for (int j = 0; j < alto; j++)
		{
			Console::SetCursorPosition(x + i, j + y);
			cout << " ";
		}
}
//get
int Base::get_ancho() { return ancho; }
int Base::get_alto() { return alto; }
int Base::get_x() { return x; }
int Base::get_y() { return y; }

bool Base::colision(int _x, int _y, int _ancho, int _alto)
{
	return x + ancho > _x && _x + _ancho > x && y + alto > _y && _y + _alto > y;
}